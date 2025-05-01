#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int size)
{

  for (int i = 0; i < size - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[minIndex])
        minIndex=j;
    }
    swap(arr[minIndex],arr[i]);
  }
}

int main()
{
  int arr[] = {44, 33, 55, 22, 11};
  int size = 5;
  selectionSort(arr, size);
  for (int a : arr)
    cout << a << " ";

  return 0;
}