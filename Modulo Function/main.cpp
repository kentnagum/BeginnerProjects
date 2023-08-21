#include <iostream>
using namespace std;
int moduloNum(int a, int b)
{
    return a %= b;
}
int main()
{
    moduloNum(25, 12);
    return 0;
}
