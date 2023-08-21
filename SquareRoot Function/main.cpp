#include <iostream>
using namespace std;
int squareRootNum(int a)
{
    int x = 0;
    while(a != x * x)
    {
        x++;
    }
    return x;
}
int main()
{
    squareRootNum(100);
    return 0;
}
