#include <iostream>
using namespace std;

int main()
{
    int container[] = {5, 10, 15, 20, 25, 30};
    int userInput;
    cout << "Enter number: ";
    cin >> userInput;
    for(int i = 0; i < 6; i++)
    {
        if(userInput == container[i])
        {
            cout << "You have found the number." << endl;
            break;
        }else if(userInput != container[i] && i == 5)
        {
            cout << "You have not found the number." << endl;
            break;
        }
    }
    return 0;
}

