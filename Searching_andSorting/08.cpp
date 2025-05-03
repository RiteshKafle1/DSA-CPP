#include <iostream>
using namespace std;
int findTarget(int arr[], int target, int size)
{

  int s = 0;
  int e = size - 1;

  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (arr[mid] == target)
      return mid;
    if (arr[mid - 1] == target)
      return mid - 1;
    if (arr[mid + 1] == target)
      return mid + 1;
    if (target > arr[mid])
      s = mid + 2;
    else
      e = mid - 2;
    mid = s + (e - s) / 2;
  }
  return -1;
}
int main()
{
  int arr[] = {10, 3, 40, 20, 50, 80, 70};
  int size = 7;
  int target = -700;
  int result = findTarget(arr, target, size);

  cout << "Element found at " << result;
  return 0;
}