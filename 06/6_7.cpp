#include <iostream>
using namespace std;
void printFirstLast(int arr[], int size)
{

  int i = 0;
  int j = size - 1;

  while (i < j)
  {
    cout << arr[i] << " ";
    i++;
    cout << arr[j] << " ";
    j--;
  }
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60};
  int size = 7;
  printFirstLast(arr, size);
  return 0;
}