#include <iostream>
#include <stdlib.h>
using namespace std;
// VARIABLE --------------------------------------------------------------------
int emptySlot[4] = {0, 1, 2, 3}; int a, b, c, d;
int deckCards = 52;
int positonAddMin = 1, positonAddMax = 4;
// FUNCTION --------------------------------------------------------------------


 void randomizer()
{
    a = rand()%(positonAddMax - positonAddMin + 1) + positonAddMin; b = rand()%(positonAddMax - positonAddMin + 1) + positonAddMin;
    c = rand()%(positonAddMax - positonAddMin + 1) + positonAddMin; d = rand()%(positonAddMax - positonAddMin + 1) + positonAddMin;
  while(a==b || a==c || a==d || b==c || b==d || c==d)
  {
    b = rand()%(positonAddMax - positonAddMin + 1) + positonAddMin;
    c = rand()%(positonAddMax - positonAddMin + 1) + positonAddMin;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    {
        break;
    }
    else
    {
        randomizer();
    }

   }
}
void addCards()
{
    int limitators = 4;
    while(limitators > 0)
    {
        limitators--;
        deckCards--;
    }
    randomizer();
}
void shuffleCard()
{

    do
    {
     addCards();
     cout << a << "A\n" << b << "B\n" << c << "C\n" << d << "D\n" << endl;
     positonAddMax = 4 + positonAddMax;
     positonAddMin = 4 + positonAddMin;
    }while(deckCards > 0);
}

// MAIN --------------------------------------------------------------------------
int main()
{
    shuffleCard();
    return 0;
}
