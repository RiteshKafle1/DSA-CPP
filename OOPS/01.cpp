#include <iostream>
using namespace std;

class Student
{
public:
  string name;
  int roll_no, age;
  string grade;
};

int main()
{
  Student S1;
  S1.name = "ritesh";
  S1.roll_no = 31;
  S1.age = 20;
  S1.grade = "A+";

  cout << S1.name << " ";

  Student S2;
  S2.name = "ramu";
  S2.roll_no = 32;
  S2.age = 24;
  S2.grade = "B+";

  cout << S2.name << " ";
  return 0;
}