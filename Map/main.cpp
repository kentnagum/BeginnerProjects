#include <iostream>
using namespace std;
char Map[7][11] = { "##########",
                    "#@       #",
                    "##########",
                    "#        #",
                    "##########",
                    "#        #",
                    "##########" };

int main()
{
    for(int y = 0; y < 7; y++){
            for(int x = 0; x < 10; x++)
            {
              cout << Map[y][x];
            }
            cout << endl;
    }
    return 0;
}
