#include <iostream>
#include <math.h>
using namespace std;
void checkArmstrongNumber(int n)
{
  int sum = 0;
  int lastDigit;
  int originalValue = n;
  int originalValue2 = n;
  int digitCount = 0;
  while (originalValue2 > 0)
  {
    digitCount++;
    originalValue2/= 10;
  }
  // cout << "DIgitCount" << digitCount << " ";

  while (n > 0)
  {
    lastDigit = n % 10;
    // cout << "Last Digit " << lastDigit << endl;
    sum += pow(lastDigit, digitCount);
    // cout << "Sum " << sum << endl;
    n /= 10;
  }
  if (sum == originalValue)
    cout << "The number is Armstrong" << " ";
  else
    cout << "The number is not Armstrong" << " ";
}
int main()
{
  int number = 1634;
  checkArmstrongNumber(number);

  return 0;
}