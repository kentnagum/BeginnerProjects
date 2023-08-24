#include <iostream>
using namespace std;

int raised(int power, int num)
{
    int powerValue = 1;
    int oldNumVal = num;
    while(powerValue < power)
    {
       num = num * oldNumVal;
       powerValue++;
       if(powerValue == power){
         return num;
       }
    }
}
int main()
{
    raised(3, 5); //Output: 125
    return 0;
}
