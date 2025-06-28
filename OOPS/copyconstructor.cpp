#include <iostream>
using namespace std;

class Customer
{

  string name;
  int balance, account_no;

public:
  // parameterized constructor
  Customer(string name, int balance, int acc_no)
  {
    this->name = name;
    this->balance = balance;
    this->account_no = acc_no;
  }

  Customer(Customer &B)
  {
    name = B.name;
    balance = B.balance;
    account_no = B.account_no;
  }

  void display()
  {
    cout << name << " " << balance << " " << account_no << " ";
  }
};

int main()
{
  Customer A1("Ritesh", 100000000, 423234);
  // copying the value of A1 to A2.
  Customer A2(A1);

  // A1.display();
  A2.display();
  return 0;
}