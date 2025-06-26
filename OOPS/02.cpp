#include <iostream>
using namespace std;

class Student
{
private:
  string name;
  int age, roll_no;
  string grade;

public:
  // this methods are also called setters and getters.
  void setName(string n)
  {
    name = n;
  }
  void setAge(int a)
  {
    age = a;
  }
  void setRoll(int r)
  {
    roll_no = r;
  }
  void setGrade(string g)
  {
    grade = g;
  }

  void getName()
  {
    cout << name << " ";
  }

  void getAge()
  {
    cout << age << " ";
  }
  void getGrade()
  {
    cout << grade << " ";
  }
  void getRoll()
  {
    cout << roll_no << " ";
  }
};

int main()
{
  Student S1;

  S1.setName("Ritesh");
  S1.setAge(20);
  S1.setGrade("A+");
  S1.setRoll(20);

  S1.getAge();
  S1.getGrade();
  S1.getName();
  S1.getRoll();

  return 0;
}