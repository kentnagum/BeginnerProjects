#include <iostream>
using namespace std;
int subtractNum(int a, int b)
{
    return a -= b;
}
int main()
{
    subtractNum(5, 5);
    return 0;
}
