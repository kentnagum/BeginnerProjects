#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<sstream>
using namespace std;
string input;
string printSomething;
string printNewline;
string container;
string integerVariable;
string VariableValue;
int initialValue;
void clearscreen();
void inPrintMode();
void print()
{

   cout << printSomething << integerVariable;

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
    cout << "'init_newline' - to add a new line of code\n'init_clear' - to clear everything you initialised\n";
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
    bool hasDeclaredName = false;
    string commandNewline = "init_newline";
    string commandPrint = "init_print";
    string commandClear = "init_clear";
    string commandIntegerName = "init_int_name";
    string commandIntegerValue = "init_int_val";
    string commandExitMode = "extmd";
   while(true)
   {
     getline(cin, input);
     if(input == commandNewline)
     {
       printNewline = "\n";
       container = printSomething + printNewline;
     printSomething = container;
     }else if(input == commandPrint)
     {
      getline(cin, printSomething);
      container += printSomething;
     printSomething = container;
     }
     else if(input == commandIntegerName)
     {
       getline(cin, integerVariable);
       hasDeclaredName = true;
     }
     else if(input == commandIntegerValue && hasDeclaredName)
     {
       getline(cin, VariableValue);
       stringstream(VariableValue) >> initialValue;
     }
     else if(input == commandClear)
     {
      container = "";
      printSomething = container;
     }
     else if(input == commandExitMode)
     {
       break;
     }
     else if(input == commandIntegerValue && !hasDeclaredName)
     {
       cerr << "\nError: Hasn't yet declared a name for variable." << endl;
     }
     else
     {
      cerr << "\nError: Missing input or Wrong input." << endl;
     }



   }
}
