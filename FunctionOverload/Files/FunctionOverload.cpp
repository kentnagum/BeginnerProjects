#include<iostream>
using namespace std;

void printNum(float x)
{
   cout << x << endl;
}
void printNum(int x)
{
   cout << x << endl;
}
int main()
{
    int a = 10;
    float b = 4.8777;
    printNum(b);
    printNum(a);
    return 0;
}
