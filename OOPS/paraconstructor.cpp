#include <iostream>
using namespace std;

class Customer
{

  string name;
  int balance, account_no;

public:
  //parameterized constructor
  Customer(string name, int balance, int acc_no)
  {
    this->name = name;
    this->balance = balance;
    this->account_no = acc_no;
  }

  void display()
  {
    cout << name << " " << balance << " " << account_no << " ";
  }
};

int main()
{
  Customer A1("Ritesh", 100000000, 423234);

  A1.display();
  return 0;
}