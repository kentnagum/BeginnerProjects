#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
string input;
string printSomething;
void clearscreen();
void print()
{ 
   cout << endl << printSomething << endl;
}
void checkOtherCmd()
{
cout << "user has accessed other commands.\n";
 string othrcmdClearScreen = "clrscr";
 getline(cin, input);
  if(input == othrcmdClearScreen)
  {
    clearscreen();
  }
}
void clearscreen()
{
  system("cls");
}
int main()
{
    cout << "Commands:\n'print' - to initialise what to print\n'othrcmd' - to access other commands\n'run' - to execute the initialised\n'ext' - to exit the program\nOther Commands:\n'clrscr' - to clear screen\n\n";
    cout << "Note: After you typed a 'print' command press enter then you can use the 'print' command.\nafter you typed in what you want to print press enter again to initialise. To show what you want to print use the 'run' command.\n\n";
    string commandPrint = "print";
    string commandOtherCommands = "othrcmd";
    string commandRun = "run";
    string commandExit = "ext";
    bool exit = false;
    while(!exit)
    { 
      getline(cin, input);
     if(input == commandPrint)
     {
       getline(cin, printSomething);
     }
     else if(input == commandRun)
     {
       print();
     }
     else if(input == commandOtherCommands)
     {
       checkOtherCmd();
     }
     else if(input == commandExit)
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
