#include<iostream>
#include<sstream>
using namespace std;
class Student
{
public:
  string name;
  string inputNum;
  long int number;
  int age;
  string account; 
    void getInfo()
    {
      cout << "Enter your name: ";
      getline(cin, name);
      cout << "Enter your number: ";
      getline(cin, inputNum);
      stringstream(inputNum) >> number;
      cout << "Enter your age: ";
      cin >> age;
      cout << "Enter your account: ";
      cin >> account;
    }
   void announce()
    {
       cout << "name: " << name << endl;
       cout << "number: " << number << endl;
       cout << "age: " << age << endl;
       cout << "account: " << account << endl;
    }
};
int main()
{
    Student student1;
    student1.getInfo();
    student1.announce();
    return 0;
}