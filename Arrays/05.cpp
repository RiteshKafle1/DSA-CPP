#include <iostream>
#include <algorithm>
using namespace std;

void rightRotate(int arr[], int size, int k)
{

  int rotation = k % size;
  if(rotation==0)
      return;

  int low = 0;
  int high = size - 1;

  // reverse an array
  while (low < high)
  {
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
  // reverse upto rotation.

  low = 0;
  high = rotation - 1;
  while (low < high)
  {
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
  //
  // reverse from rotation to size.

  low = rotation;
  high = size - 1;
  while (low < high)
  {
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int size = 7;
  int rotateBy = 8;
  rightRotate(arr, size, rotateBy);
  for (int a : arr)
    cout << a << "  ";
  return 0;
}