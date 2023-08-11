#include <iostream>
#include <stdlib.h>
#include <conio.h>
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
    bool stop = false;
    shuffleCard();
    cout << "Press any key to reshuffle.";
    cout << " Or press E to exit." << endl;
    while(stop == false)
    {
      if(getch() != 'e' && getch() != 'E')
      {
          deckCards = 52;
          positonAddMax = 4;
          positonAddMin = 1;
          shuffleCard();
      }
      else if(getch() == 'e' || getch() == 'E')
      {
          stop == true;
          break;
      }cout << "Press any key to reshuffle.";
    cout << " Or press E to exit." << endl;
    }
    return 0;
}
