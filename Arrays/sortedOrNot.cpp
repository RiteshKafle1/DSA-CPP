#include <iostream>
using namespace std;

bool findSortedOrNot(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {

    if ((arr[i] <= arr[i + 1]))
      continue;
    else
      return false;
  }
  return true;
}

int main()
{
  int arr[] = {1, 2, 2, 3, 3, 4};
  int size = 6;
  if (findSortedOrNot(arr, size))
    cout << "Array is sorted " << endl;
  else
    cout << "Array is not sorted " << endl;
  return 0;
}