#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sentance;
    string question[11];
    question[0] = "Hello";
    question[1] = "what is your name?";
    question[2] = "who developed you ?";
    question[3] = "who is the prime minister of india ?";
    question[4] = "what is the capital of india ?";
    question[5] = "what is your favourate food ?";
    question[6] = "How to become sucessful ?";
    question[7] = "who is the richest person in the world ?";
    question[8] = "who is the fastest human ?";
    question[9] = "who discovered zero ?";
    question[10] = "who is known as the baddest man on planet";
    
    string answer[11];
    answer[0] = "Hii, how can i help you ?";
    answer[1] = "I am jarvis, your personal chatbot";
    answer[2] = "Mr. Mohd Naved developed me";
    answer[3] = "Narendra Modi";
    answer[4] = "Delhi is the capital of India";
    answer[5] = "Briyani and Nihari but i can only consume electric energy";
    answer[6] = "work hard everyday with sheer and determination on your dreams and you will be suceed";
    answer[7] = "As of March 1, 2024, the richest person in the world is Bernard Arnault, the CEO of French luxury goods group LVMH; he's worth nearly $230 billion";
    answer[8] = "Usain Bolt, a Jamaican athlete born in 1986 in Montego Bay, is the fastest person in the world. Usain Bolt holds world records in the 100-meter and 200-meter Olympic sprints";
    answer[9] = "Joseph John Thomson (J. J. Thomson, 1856-1940; see photo at American Institute of Physics) is widely recognized as the discoverer of the electron. Thomson was the Cavendish professor of Experimental Physics at Cambridge University and director of its Cavendish Laboratory from 1884 until 1919";
    answer[10] = "Mike Tyson";

    do
    {
        cout<<"Enter a sentance or question: "<<endl;
        getline(cin,sentance);
        if( sentance.find("how")!=string::npos || sentance.find("who")!=string::npos ||sentance.find("who")!=string::npos || sentance.find("are")!=string::npos)
         {
             cout<<"Reply-->"<<endl;
         }  
         int len = sentance.size();
         if (len>25)
         {
             cout<<"you are asking a lenghty question"<<endl;
         }
         else if (len<6)
         { cout<<"ok"<<endl;
         }
         else if (len<4)
         { cout<<"Hello"<<endl;
         }
        else if (sentance == question[0])
         { 
             cout<<answer[0]<<endl;
         }
         else if (sentance == question[1])
         { 
             cout<<answer[1]<<endl;
         }
         else if (sentance == question[2])
         { 
             cout<<answer[2]<<endl;
         }
         else if (sentance == question[3])
         { 
             cout<<answer[3]<<endl;
         }
         else if (sentance == question[4])
         { 
             cout<<answer[4]<<endl;
         }
         else if (sentance == question[5])
         { 
             cout<<answer[5]<<endl;
         }
         else if (sentance == question[6])
         { 
             cout<<answer[6]<<endl;
         }
         else if (sentance == question[7])
         { 
             cout<<answer[7]<<endl;
         }
         else if (sentance == question[8])
         { 
             cout<<answer[8]<<endl;
         }
         else if (sentance == question[9])
         { 
             cout<<answer[9]<<endl;
         }
         else if (sentance == question[10])
         { 
             cout<<answer[10]<<endl;
         }
         
         cout<<"\n\n\t<<---------Enter Exit to close discussion----"<<endl;
         
  }  while (sentance!="exit" && sentance!="Exit");


    return 0;
}