#include <iostream>
#include <algorithm>
using namespace std;

// given an array of unique integers,determine the number of pairs of array element that have a differecne equal to target value.

bool findPairs(int arr[], int size, int value)
{
  sort(arr, arr + size);
  int s = 0;
  int end = size - 1;
  while (s <= end)
  {
    int mid = s + (end - s) / 2;

    if (value == arr[mid])

      return true;

    else if (value > arr[mid])
      s = mid + 1;
    else
      end = mid - 1;
  }
  return false;
}

int main()
{
  int arr[] = {1, 5, 3, 4, 2};
  int size = 5;
  int target = 1;
  int pairCount = 0;

  for (int i = 0; i < size; i++)
  {

    if (findPairs(arr, size, (arr[i] - target)))
    {
      cout << "found " << arr[i] << " and " << (arr[i] - target) << "\n";
      pairCount++;
    }
  }
  cout << "Total Number of Pairs are :" << pairCount << " ";

  return 0;
}