// PERSONAL ASSISTANT SYSYEM (TEXT TO SPEECH)


#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>  

using namespace std;
void wishme(){
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Bhuvi"<<endl;
        string phrase = "Good Morning Bhuvi";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Bhuvi"<<endl;
        string phrase = "Good Afternoon Bhuvi";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Bhuvi"<<endl;
        string phrase = "Good Evening Bhuvi";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}

int main()
{
    system("COLOR A0");
	system("cls");

    cout<<"\t\t\t<======================= W E L C O M E ==========================================>"<<endl;
    cout<<"\t\t\t<======================= I'M A VIRTUAL ASSISTANT ================================>"<<endl;
    cout<<"\t\t\t<======================= MY NAME IS RAJ 2.0 =====================================>"<<endl;
    cout<<"\t\t\t<======================= I'M HERE TO HELP YOU ===================================>"<<endl<<endl;

    char password[20]; //to take password
    char ch[100]; 

    do
    {
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        gets(password);
        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "Ganpati Bappa Morya")==0){
            cout<<"\n<==================================================================================================>\n\n";
            wishme();
            do{
                cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"How can i help you Sir...."<<endl<<endl;

                string phrase = "How can i help you Sir ";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Your query ===> ";
                gets(ch);
                cout<<endl;
                cout<<"Here is the result for your query ===> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello Boss....."<<endl;
                    string phrase = "Hello Boss";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm a Raj 2.0 virtual assistant created by Bhuvi !!!"<<endl;
                    string phrase = "I'm a Raj 2.0 virtual assistant created by Bhuvi ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir, tell me how can i help you.."<<endl;
                    string phrase = "I'm good sir, tell me how can i help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    // make function to show date and time
                    datetime();
                }

                 

                else if(strcmp(ch, "open google") == 0){
                    cout<<"openining google....."<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                

                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"openining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                

                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                
                }
                
                else if(strcmp(ch, "open spotify") == 0){
                    cout<<"openining spotify....."<<endl;
                    string phrase = "opening spotify";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://open.spotify.com");
                
                }
                
                else if(strcmp(ch, "open google map") == 0){
                    cout<<"opening google map....."<<endl;
                    string phrase = "opening google map";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.co.in");
                
                }
                else if(strcmp(ch, "open classroom ") == 0){
                    cout<<"opening classroom....."<<endl;
                    string phrase = "opening classrrom";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://classroom.google.com");
                
                }


                else{
                    cout<<"Sorry could not understand your query please ty again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please ty again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    
                    system("cls");

                    cout << "\t\t\t<============================= W E L C O M E=============================>" << endl;
                    cout << "\t\t\t<============================= I'M VIRTUAL ASSISTANT =============================>" << endl;
                    cout << "\t\t\t<============================= MY NAME IS RAJ 2.0 =============================>" << endl;
                    cout << "\t\t\t<============================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =============================>" << endl
                         << endl;
                

                    cout << "======================" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "======================" << endl
                         << endl;
                    string phrase = "Incorrect Password, Please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}
//cout<<"####################################################   LET'S START   ###################################################";
//    cout<<" Features                                                    :- Commands                                      ";
//    cout<<" YOUTUBE                                                     :- open Youtube                                  ";
//    cout<<" GOOGLE                                                      :- open google                                   ";
//    cout<<" NOTEPAD                                                     :- open notepad                                  ";
//    cout<<" INSTAGRAM                                                   :- open instagram                                ";
//    cout<<" SPOTIFY                                                     :- open spotify                                  ";
//    cout<<"####################################################   HERE WE GO....##################################################";
