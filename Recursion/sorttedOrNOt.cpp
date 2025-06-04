#include <iostream>
using namespace std;

bool findSortedOrNot(int arr[], int size, int index)
{
  if (index == size || size==1)
    return true;

  if (index + 1 < size && arr[index] > arr[index + 1])
    return false;
  findSortedOrNot(arr, size, index + 1);
}

int main()
{
  int arr[] = {10, 11, 12, 15, 9};
  int size = 5;
  int index = 0;
  if (findSortedOrNot(arr, size, index))
    cout << "Sorted " << " ";
  else
    cout << "Not sorted" << " ";

  return 0;
}