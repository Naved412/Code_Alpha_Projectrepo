#include <iostream>
#include <filesystem>
#include <vector>
#include <fstream>

namespace fs = std::filesystem;

void listFiles(const fs::path& directory) {
    std::vector<fs::path> files;

    for (const auto& entry : fs::directory_iterator(directory)) {
        files.push_back(entry.path());
    }

    for (const auto& file : files) {
        std::cout << file.filename() << "\n";
    }
}

void saveFile(const fs::path& filePath) {
    std::ofstream file(filePath);
    if (file.is_open()) {
        std::string content;
        std::cout << "Enter content to save in the file (Ctrl+D to end input):\n";
        std::cin.ignore(); 
        while (std::getline(std::cin, content)) {
            file << content << "\n";
        }
        std::cout << "File saved successfully.\n";
    } else {
        std::cout << "Unable to open the file for saving.\n";
    }
}

void openFile(const fs::path& filePath) {
    std::ifstream file(filePath);
    if (file.is_open()) {
        std::string content;
        std::cout << "File content:\n";
        while (std::getline(file, content)) {
            std::cout << content << "\n";
        }
        file.close();
    } else {
        std::cout << "Unable to open the file.\n";
    }
}

void deleteFile(const fs::path& filePath) {
    if (fs::remove(filePath)) {
        std::cout << "File deleted successfully.\n";
    } else {
        std::cout << "Unable to delete the file.\n";
    }
}

int main() {
    std::string currentPath = ".";
    char choice;

    do {
        std::cout << "\nCurrent Directory: " << currentPath << "\n";
        listFiles(currentPath);

        std::cout << "\nOptions:\n";
        std::cout << "1. Change Directory\n";
        std::cout << "2. Save File\n";
        std::cout << "3. Open File\n";
        std::cout << "4. Delete File\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                std::cout << "Enter new directory path: ";
                std::cin >> currentPath;
                break;
            }
            case '2': {
                std::cout << "Enter file name to save (including path): ";
                std::string fileName;
                std::cin >> fileName;
                saveFile(fileName);
                break;
            }
            case '3': {
                std::cout << "Enter file name to open (including path): ";
                std::string fileName;
                std::cin >> fileName;
                openFile(fileName);
                break;
            }
            case '4': {
                std::cout << "Enter file name to delete (including path): ";
                std::string fileName;
                std::cin >> fileName;
                deleteFile(fileName);
                break;
            }
            case '5': {
                std::cout << "Exiting...\n";
                break;
            }
            default: {
                std::cout << "Invalid choice. Try again.\n";
            }
        }

    } while (choice != '5');

    return 0;
}
