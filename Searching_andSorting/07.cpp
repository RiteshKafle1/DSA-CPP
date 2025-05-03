#include <iostream>
using namespace std;

int findQuotient(int divisor, int dividend)
{
  int s = -dividend;
  int e = dividend;
  int mid = s + ((e - s) >> 1);
  int ans = -1;
  while (s <= e)
  {
    if ((divisor * mid) == dividend)
      return mid;
    if ((divisor * mid) < dividend)
    {
      ans = mid;
      s = mid + 1;
    }
    else
      e = mid - 1;
    mid = s + ((e - s) >> 1);
  }
}
int main()
{
  int divisor = 2;
  int dividend = -10;
  int result = findQuotient(abs(divisor), abs(dividend));

  if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    result = 0 - result;
  cout << " " << result << " ";

  return 0;
}