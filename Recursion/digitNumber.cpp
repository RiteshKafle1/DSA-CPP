#include <iostream>
using namespace std;

void printDigit(int number)
{

  if (number == 0)
      return;

  int newNumber = number / 10;
  printDigit(newNumber);
  int digit = number % 10;
  cout << digit << " ";
}

int main()
{
  int number = 1236448;
  printDigit(number);
  return 0;
}