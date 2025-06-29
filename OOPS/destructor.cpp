#include <iostream>
using namespace std;

class Customer
{

  string name;
  int *balance;

public:
  // parameterized constructor
  Customer(string name, int bal)
  {
    this->name = name;
    balance = new int;
    *balance = bal;
    // this->account_no = acc_no;
  }

  void display()
  {
    cout << name << " " << *balance << " ";
  }
  // destructor

  ~Customer()
  {
    cout << "Dynamically allocated resource deleted" << " ";
  }
};

int main()
{
  Customer A1("Ritesh", 10000000);

  A1.display();
  return 0;
}