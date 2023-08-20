#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<sstream>
using namespace std;

string input;

string printSomething;

string printNewline;

string container;

string intVariableName;
string intVariableValue;
int intInitialValue;

string StringVariableName;
string StringValue;

void clearscreen();
void inPrintMode();
void print()
{

   cout << printSomething << intVariableName << StringVariableName;

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
    bool hasDeclaredNameInt = false;
    bool hasDeclaredNameString = false;
    string commandNewline = "init_newline";
    string commandPrint = "init_print";
    string commandClear = "init_clear";
    string commandInput = "init_input";
    string commandIntegerName = "init_int_name";
    string commandIntegerValue = "init_int_val";
    string commandStringName = "init_string_name";
    string commandStringValue = "init_string_val";
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
     else if(input == commandInput)
     {

     }
     else if(input == commandIntegerName)
     {
       getline(cin, intVariableName);
       hasDeclaredNameInt = true;
     }
     else if(input == commandIntegerValue && hasDeclaredNameInt)
     {
       getline(cin, intVariableValue);
       intVariableName = intVariableValue;
       stringstream(intVariableName) >> intInitialValue;

     }
     else if(input == commandStringName)
     {
       getline(cin, StringVariableName);
       hasDeclaredNameString = true;
     }
     else if(input == commandStringValue)
     {
       getline(cin, StringValue);
       StringVariableName = StringValue;
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
     else if(input == commandIntegerValue && !hasDeclaredNameInt || input == commandStringValue && !hasDeclaredNameString)
     {
       cerr << "\nError: Hasn't yet declared a name for variable." << endl;
     }
     else
     {
      cerr << "\nError: Missing input or Wrong input." << endl;
     }



   }
}
