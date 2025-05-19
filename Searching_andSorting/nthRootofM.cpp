#include <iostream>
#include <math.h>
using namespace std;

int findNthRoot(int n, int m)
{
  int low = 1;
  int high = m;
  int mid = low + (high - low) / 2;
  while (low <= high)
  {
    int powerValue = pow(mid, n); // O(logn) power.
    // cout << powerValue << " ";
    if (powerValue == m)
      return mid;
    else if (powerValue < m)
      low = mid + 1;
    else
      high = mid - 1;
    mid = low + (high - low) / 2;
  }
  return -1;
}

int main()
{
  // int n = 4;
  int n = 3;
  // int m = 69;
  int m = 27;
  int result = findNthRoot(n, m);
  cout << "The result is " << result;

  return 0;
}