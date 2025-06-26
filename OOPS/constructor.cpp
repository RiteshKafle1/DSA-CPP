#include <iostream>
using namespace std;

class Customer
{

  string name;
  int balance, account_no;

public:
  // automatically invoked when the object is created.
  Customer()
  {
    // initializing a value.
    name = "Ritesh";
    balance = 5000000;
    account_no = 432434;
    // cout << "Default Constructor";
  }

  void display()
  {
    cout << name << " " << balance << " " << account_no << " ";
  }
};

int main()
{
  Customer A1;

  A1.display();
  return 0;
}