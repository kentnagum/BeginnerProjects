#include <iostream>
using namespace std;
int MultiplyFractions(int x1, int y1, int x2, int y2)
{
    return (x1 * x2) / y1 * y2;
}
int main()
{
    cout << MultiplyFractions(2, 4, 2, 2);
    return 0;
}
