#include <iostream>
using namespace std;
int divideNum(int a, int b)
{
    return a /= b;
}
int main()
{
    divideNum(10, 200);
    return 0;
}
