#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int arr[] = {1, 12, -5, -6, 50, 3};
  int size = 6;

  int i;
  int sum = 0;
  int k = 4;
  int j = k - 1;

  for (i = 0; i <= j; i++)
  {
    sum += arr[i];
  }
  i = 1;
  j++;
  int maxSum = sum;

  while (j < size)
  {
    sum = sum - arr[i - 1];
    sum = sum + arr[j];

    i++;
    j++;
    maxSum = max(maxSum, sum);
  }
  cout << "Maximum Average is :" << (maxSum / (double)k) << endl;
  return 0;
}