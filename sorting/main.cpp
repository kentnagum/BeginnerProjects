#include <iostream>
using namespace std;

void sorting(int a, int b, int c)
{
     if(a < b && a < c)
     {
         cout << a << ", ";
         if(b < c)
         {
             cout << b << ", ";
             cout << c;
         }else
         {
             cout << c << ", ";
             cout << b;
         }
     }else if(b < a && b < c)
     {
         cout << b << ", ";
         if(a < c)
         {
             cout << a << ", ";
             cout << c;
         }else
         {
             cout << c << ", ";
             cout << a;
         }
     }else
     {
         cout << c << ", ";
         if(a < b)
         {
             cout << a << ", ";
             cout << b;
         }else
         {
             cout << b << ", ";
             cout << a;
         }
     }
}
int main()
{
    return 0;
}
