#include <iostream>
using namespace std;

int mySqrt(int x)
{
  int s = 0;
  int e = x;
  long long int mid = s + ((e - s) >> 1);
  int ans = -1;
  while (s <= e)
  {
    long long int product = mid * mid;
    if (product == x)
      return mid;
    if (product < x)
    {
      ans = mid;
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    mid = s + ((e - s) >> 1);
  }
  return ans;
}

double myPrecisionSqrt(int n)
{
  double sqrt = mySqrt(n); // O(logn)

  int precision = 8;
  double step = 0.1;

  while (precision) // precision
  {
     double j = sqrt;
    while (j * j <= n) // 0 to 9
    {
      sqrt = j;
      j += step;
    }
    step /= 10;
    precision--;
  }
  return sqrt;
}

int main()
{
  int number = 63;
  double result = myPrecisionSqrt(number);
  cout << "The result is " << " " << result; //cout only gives precision upto 5 digit
  

  return 0;
}