#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char map1[10][10] = {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' };
char map2[5][10] = {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
                    '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' };
char map3[10][5] = {'#', '#', '#', '#', '#',
                    '#', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', '#',
                    '#', ' ', ' ', ' ', '#',
                    '#', '#', '#', '#', '#' };

char initMap1()
{
  for(int y=0; y < 10; y++){
       for(int x=0; x < 10; x++){
           cout << map1[y][x];
         }
        cout << endl;
      }
}
char initMap2()
{
  for(int y=0; y < 5; y++){
       for(int x=0; x < 10; x++){
           cout << map2[y][x];
         }
        cout << endl;
      }
}
char initMap3()
{
  for(int y=0; y < 10; y++){
       for(int x=0; x < 5; x++){
           cout << map3[y][x];
         }
        cout << endl;
      }
}
char randomizer()
{
     srand(time(0));
      int initMap1, initMap2, initMap3;
     initMap1 = 1+(rand()%4);
     initMap2 = 1+(rand()%4);
     initMap3 = 1+(rand()%4);
     while(initMap1 == initMap2 || initMap1 == initMap3 || initMap2 == initMap3)
     {
     initMap1 = 1+(rand()%4);
     initMap2 = 1+(rand()%4);
     initMap3 = 1+(rand()%4);
       if(initMap1 != initMap2 && initMap1 != initMap3 && initMap2 != initMap3)
       {
           break;
       }
     }
     if(initMap1 == 1)
     {
       return ::initMap1();
     }else if(initMap2 == 1)
     {
      return ::initMap2();
     }else
     {
      return ::initMap3();
     }

}
int main()
{
    randomizer();
    return 0;
}
