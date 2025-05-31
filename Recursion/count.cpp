#include <iostream>
using namespace std;

/*
void printCount(int n)
{
  if (n == 1)
  {
    cout << 1 << " ";
    return;
  }
  cout << n << " ";
  printCount(n - 1);
}
  */

void printCount(int n)
{
  if (n == 1)
  {
    cout << 1 << " ";
    return;
  }
  printCount(n - 1);
  cout << n << " ";
  
}

int main()
{
  int n;
  cout << "Enter the value of n " << endl;
  cin >> n;
  printCount(n);
  return 0;
}