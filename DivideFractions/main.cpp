#include <iostream>
using namespace std;
int divideFraction(int x1, int y1, int x2, int y2)
{
    x1 = x1 * y2;
    y1 = y1 * x2;
    return x1 / y1;
}
int main()
{
    cout << divideFraction(3, 6, 1, 2);
    return 0;
}
