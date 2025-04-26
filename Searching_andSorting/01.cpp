#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(int arr[], int size, int target)
{
  int start = 0;
  int end = size - 1;
  int mid;

  while (start <= end)
  {
     mid = (start + end) / 2;

    cout<<" mid "<<mid;

    if (arr[mid] == target)
        return true;
    else if ( target > arr[mid])
        start = mid + 1;
    else if(target<arr[mid])
        end = mid - 1;
  }
  return false;
}

int main()
{
  // binary search
  int arr[] = { 5, 6, 1, 2, 10, 100, 90, 4};
  int size = 8;
  int target = 10;
  sort(arr, arr + size);

  if (binarySearch(arr, size, target))
    cout << " Element Found" << " ";
  else
    cout << " Couldnot Found the element" << " ";
  return 0;
}