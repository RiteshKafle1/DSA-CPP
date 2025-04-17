#include <iostream>
#include <algorithm>
using namespace std;
bool KeyPair(int arr[], int size, int target)
{
  // O(n*n)
  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = i + 1; j < size; j++)
  //   {
  //     if (arr[i] + arr[j] == target)
  //       return true;
  //   }
  // }

  sort(arr, arr + size);

  int l = 0;
  int h = size - 1;
  int sum = 0;

  while (l < h)
  {
    sum = arr[l] + arr[h];
    if (target < sum)
      h--;
    else if (target > sum)
      l++;
    else if (target == sum)
      return true;
  }

  return false;
}
int main()
{
  int arr[6] = {1, 4, 45, 6, 10, 8};
  int size = 6;
  int target = 16;
  bool result = KeyPair(arr, size, target);

  if (result)
    cout << "yes";
  else
    cout << "no";

  return 0;
}