#include <iostream>
using namespace std;

class Customer
{
  // for each object gets it separate copy of all non-static mem
  string name;
  int acc_no, balance;
  // int total_customer = 0;

  // shared by all the objects.only one copy is created.
  static int total_customer;

public:
  Customer(string name, int acc_no, int balance)
  {
    this->name = name;
    this->acc_no = acc_no;
    this->balance = balance;
    // total_customer++;
    total_customer++;
  }

  void getInfo()
  {
    cout << "name " << name << endl;
    cout << "acc_no " << acc_no << endl;
    cout << "balance " << balance << endl;
    cout << "totalcustomer " << total_customer << endl;
  }
};

// this is how you initialize a static member
int Customer::total_customer = 0;

int main()
{
  Customer A1("Ritesh", 2113654, 10000000);

  Customer A2("Ritika", 5454546, 20000);

  // A1.getInfo();
  A2.getInfo();

  return 0;
}