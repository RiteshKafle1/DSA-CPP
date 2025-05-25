#include <iostream>
using namespace std;
int countAllDigit(int n)
{
  int count = 0;
  int lastDigit;
  while (n > 0) //tc-> log10(n).
  {
    // lastDigit = n % 10;
    n /= 10;
    count++;
  }
  return count;
}
int main()
{
  int number = 149;
  int result = countAllDigit(number);
  cout << "The total count is " << result << " ";
  return 0;
}