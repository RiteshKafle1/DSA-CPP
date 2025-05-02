#include <iostream>

using namespace std;

int pivotInRotatedArray(int arr[], int size)
{
  int s = 0;
  int e = size - 1;
  int mid = s + ((e - s) / 2); 
  while (s <= e)
  {
    if ( (mid+1 < size) && (arr[mid] > arr[mid + 1]))
      return mid;

    if (arr[s] > arr[mid])
      e = mid - 1;
    else
      s = mid + 1;

    mid = s + ((e - s) / 2);
  }
  return -1;
}

int main()
{
  int arr[] = {50, 60, 70, 80, 10, 20, 30, 40};
  int size = 8;
  int result = pivotInRotatedArray(arr, size);
  cout << "Pivot Index is " << result << " ";

  return 0;
}