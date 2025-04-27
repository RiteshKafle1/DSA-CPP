#include <iostream>
#include <algorithm>
using namespace std;

void leftRotation(int arr[], int size, int k)
{
  int rotateBy = k % size;
  if(rotateBy==0)
    return;

  // reverse an array
  int low = 0;
  int high = size - 1;
  while (low < high)
  {
    swap(arr[low],arr[high]);
    low++;
    high--;
  }
    // reverse second part
    
    low=size-rotateBy;
    high=size-1;
    while(low<high){
      swap(arr[low],arr[high]);
      low++;
      high--;
    }
  
  // reverse first part
  low=0;
  high=size-rotateBy-1;
  while(low<high){
    swap(arr[low],arr[high]);
    low++;
    high--;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5,6,7};
  int size = 7;
  int k = 8;
  leftRotation(arr, size, k);
  for (int a : arr)
  {
    cout << a << "  ";
  }

  return 0;
}