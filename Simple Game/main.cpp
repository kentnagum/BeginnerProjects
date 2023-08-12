#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int enemyDamage = rand()%30+1;
int playerHealth = 100;
int enemyHealth = 100;
int playerHealthRefresh;
int enemyHealthRefresh;
void enterBattle();
void pickPhase();
void punchAttack();
void kickAttack();
void headbuttAttack();
void enemyAttack();
void checkingMechanics();
int main()
{

    enterBattle();
    return 0;
}

void enterBattle()
{
    cout << "You have entered a battle" << endl;
    cout << "Player Health: " << playerHealth << endl;
    cout << "press any key to continue." << endl;
    getch();
    system("cls");
    pickPhase();
}
void pickPhase()
{
    char playerPick;
    char punch = '1';
    char kick = '2';
    char headbutt = '3';

    cout << "\n\nChoose an attack:\nPunch<1>\nKick<2>\nHeadbutt<3>" << endl;
    cin >> playerPick;
    cout << "\n\n";
    if (playerPick == punch){
            cout << "You have chosen Punch!" << endl;
            enemyAttack();
            punchAttack();
    } else if (playerPick == kick) {
        cout << "You have chosen Kick!" << endl;
            enemyAttack();
        kickAttack();
    } else if (playerPick == headbutt) {
        cout << "You have chosen Headbutt!" << endl;
            enemyAttack();
        headbuttAttack();
    } else {
        cout << "You have chosen the wrong button!" << endl;
        cout << "Please pick again." << endl;
        pickPhase();
    }
}
void checkingMechanics()
{
   if (enemyHealth > 0 && playerHealth > 0){

        pickPhase();
       }else if (enemyHealth <= 0 && playerHealth > 0){
        cout << "\n\nYou Win!\n\n" << endl;
         cout << "press any key to exit." << endl;
         getch();
       } else {
           cout << "\n\nYou Lose!\n\n" << endl;
            cout << "press any key to exit." << endl;
            getch();
       }
}
void punchAttack()
{
       enemyHealthRefresh = enemyHealth - 30;
       enemyHealth = enemyHealthRefresh;
       cout << "EnemyHealth:" << enemyHealth << endl << endl;
       cout << "\npress any key to continue.\n" << endl;
    getch();
    system("cls");
       checkingMechanics();
}
void kickAttack()
{
       enemyHealthRefresh = enemyHealth - 50;
       enemyHealth = enemyHealthRefresh;
       cout << "EnemyHealth:" << enemyHealth << endl << endl;
       cout << "\npress any key to continue.\n" << endl;
    getch();
    system("cls");
     checkingMechanics();
}
void headbuttAttack()
{
       enemyHealthRefresh = enemyHealth - 70;
       enemyHealth = enemyHealthRefresh;
       cout << "EnemyHealth:" << enemyHealth << endl << endl;
       cout << "\npress any key to continue.\n" << endl;
    getch();
    system("cls");
       checkingMechanics();
}
void enemyAttack()
{
    cout << "Enemy turn to attack!" << endl;
    cout << "Enemy attacked!" << endl;
    playerHealthRefresh = playerHealth - enemyDamage;
    playerHealth = playerHealthRefresh;
    cout << "Enemy did " << enemyDamage << " damage to you!" << endl;
    cout << "Player Health: "<< playerHealth << endl;

}
