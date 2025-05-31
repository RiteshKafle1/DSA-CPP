#include <iostream>
using namespace std;
int sumOfNumber(int n)
{
  if (n == 1)
    return 1;
  int sum = n + sumOfNumber(n - 1);
  return sum;
}
int main()
{
  cout << sumOfNumber(5);
  return 0;
}