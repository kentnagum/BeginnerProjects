#include <iostream>
#include <cstdlib>
using namespace std;
void convert(string userInput);
string Input;
int main()
{
    cout << "Enter Input: ";
     getline(cin, Input);
     convert(Input);
    return 0;
}
void convert(string userInput)
{
    for(int x = 0; x < 50;)
      {
          switch(userInput[x])
          {
          case 'a':
            userInput[x] = '@';
            cout << userInput[x];
            x++;
            break;
          case 'b':
            userInput[x] = '#';
            cout << userInput[x];
            x++;
            case 'c':
            userInput[x] = '$';
            cout << userInput[x];
            x++;
            break;
          case 'd':
            userInput[x] = '%';
            cout << userInput[x];
            x++;
            case 'e':
            userInput[x] = '^';
            cout << userInput[x];
            x++;
            break;
          case 'f':
            userInput[x] = '&';
            cout << userInput[x];
            x++;
            break;
            case 'g':
            userInput[x] = '*';
            cout << userInput[x];
            x++;
            break;
          case 'h':
            userInput[x] = '(';
            cout << userInput[x];
            x++;
            break;
            case 'i':
            userInput[x] = ')';
            cout << userInput[x];
            x++;
            break;
          case 'j':
            userInput[x] = '-';
            cout << userInput[x];
            x++;
            case 'k':
            userInput[x] = '_';
            cout << userInput[x];
            x++;
            break;
          case 'l':
            userInput[x] = '+';
            cout << userInput[x];
            x++;
            break;
            case 'm':
            userInput[x] = '=';
            cout << userInput[x];
            x++;
            break;
          case 'n':
            userInput[x] = '{';
            cout << userInput[x];
            x++;
            case 'o':
            userInput[x] = '[';
            cout << userInput[x];
            x++;
            break;
          case 'p':
            userInput[x] = '}';
            cout << userInput[x];
            x++;
            case 'q':
            userInput[x] = ']';
            cout << userInput[x];
            x++;
            break;
          case 'r':
            userInput[x] = ':';
            cout << userInput[x];
            x++;
            break;
            case 's':
            userInput[x] = ';';
            cout << userInput[x];
            x++;
            break;
          case 't':
            userInput[x] = '"';
            cout << userInput[x];
            x++;
            case 'u':
            userInput[x] = '\'';
            cout << userInput[x];
            x++;
            break;
          case 'v':
            userInput[x] = '|';
            cout << userInput[x];
            x++;
            case 'w':
            userInput[x] = '\\';
            cout << userInput[x];
            x++;
            break;
          case 'x':
            userInput[x] = '<';
            cout << userInput[x];
            x++;
            break;
            case 'y':
            userInput[x] = ',';
            cout << userInput[x];
            x++;
            break;
          case 'z':
            userInput[x] = '>';
            cout << userInput[x];
            x++;
          case ' ':
            userInput[x] = ' ';
            cout << userInput[x];
            x++;
          }
      }
}

