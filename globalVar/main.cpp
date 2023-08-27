#include <iostream>
using namespace std;
int var = 100;
int main()
{
    int var = 50;
    cout << "Local Variable: "<< var << endl;
    cout << "Global Variable: "<< ::var << endl;
    return 0;
}
