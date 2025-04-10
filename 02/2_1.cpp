#include <iostream>
using namespace std;

int main()
{
  int marks;
  cout << "Enter you marks" << endl;
  cin >> marks;

  switch (marks)
  {
  case  90:
    cout << "A" << endl;
    break;
  case  80:
    cout << "B" << endl;
    break;
  case  70:
    cout << "C" << endl;
    break;
  case  60:
    cout << "D" << endl;
    break;

  default:
    cout << "please study brother" << endl;
    break;
  }
  cout<<"I am outside"<<endl;
  return 0;
}