#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int size)
{
  for (int i = size - 1; i >= 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      if(arr[j]>arr[j+1])
        swap(arr[j], arr[j + 1]);
    }
  }
}

int main()
{
  int arr[] = {10,9,8,7,6,5,4,3,2,1};
  int size = 10;
  bubbleSort(arr, size);
  for (int a : arr)
    cout << a << " ";

  return 0;
}