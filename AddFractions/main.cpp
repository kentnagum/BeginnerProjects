#include <iostream>
using namespace std;
int addFraction(float x1, float y1, float x2, float y2)
{
    if(y1 == y2)
    {
        return (x1 + x2) / y1;
    }else
    {
        return ((x1 * y2)+(x2 * y1)) / (y1 * y2);
    }
}

int main()
{
    addFraction(4, 4, 5, 5);
    return 0;
}
