#include <iostream>
using namespace std;

int binarySearchTarget(int arr[], int size, int target, int start, int end)
{

  if (start > end)
    return -1;

  int mid = (start + end) / 2;

  if (arr[mid] == target)
    return mid;

  if (target > arr[mid])
    return binarySearchTarget(arr, size, target, mid + 1, end);
  else
    return binarySearchTarget(arr, size, target, start, mid - 1);
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int size = 7;
  int target = 700;
  int s = 0;
  int e = size - 1;

  cout << binarySearchTarget(arr, size, target, s, e);

  return 0;
}