#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
string input;
string printSomething;
string newline;
bool newl = false;
void clearscreen();
void inPrintMode();
void print()
{  
     if(newl)
     {
     cout << "\n";
     }
     cout << printSomething << endl;
}
void checkOtherCmd()
{
cout << "user has accessed other commands.\n";
 string othrcmdClearScreen = "clrscr";
 string commandExitMode = "extmd";
 while(true)
   {
        getline(cin, input);
      if(input == othrcmdClearScreen)
     {
        clearscreen();
     }
     else if(input == commandExitMode)
     {
       break;
     }
     else
     {
       cerr << "\nError: Missing input or Wrong input." << endl;
     }
   }
}
void clearscreen()
{
  system("cls");
}
int main()
{
    cout << "Commands:\n'pntmd' - to open printing mode\n'othcmd' - to access other commands\n'run' - to execute the initialised\n'ext' - to exit the program\n'extmd' - to exit the current mode\nOther Commands:\n'clrscr' - to clear screen\nPrint Commands:\n'init_print' - to initialise what to print\n";;
    cout << "'init_newline' - to add a new line of code\n";
    cout << "Note: After you typed a 'init_print' command press enter then you can use the 'init_print' command.\nafter you typed in what you want to print press enter again to initialise. To show what you want to print use the 'run' command.\n\n";
    string commandPrintMode = "pntmd";
    string commandOtherCommands = "othcmd";
    string commandRun = "run";
    string commandExitProgram = "ext";
    bool exit = false;
    while(!exit)
    { 
      getline(cin, input);
     if(input == commandPrintMode)
     {
       inPrintMode();
     }
     else if(input == commandRun)
     {
       print();
     }
     else if(input == commandOtherCommands)
     {
       checkOtherCmd();
     }
     else if(input == commandExitProgram)
     {
       exit = true;
     }
     else
     {
      cerr << "\nError: Missing input or Wrong input." << endl;
     }
    }
    return 0;
}
void inPrintMode()
{
    string commandNewline = "init_newline";
    string commandPrint = "init_print";
    string commandExitMode = "extmd";
    newl = false;
   while(true)
   {
     getline(cin, input);
     if(input == commandNewline)
     {
       newl = true;
     }else if(input == commandPrint)
     {
      getline(cin, printSomething);
     }
     else if(input == commandExitMode)
     {
       break;
     }
     else
     {
      cerr << "\nError: Missing input or Wrong input." << endl;
     }
     
   }
}