#include <iostream>
using namespace std;

void printOddNum(int arr[], int size, int index)
{
  if (index == size)
    return;

  if ((arr[index] & 1))
    cout << arr[index] << " ";

  printOddNum(arr, size, index + 1);
}

int main()
{
  int arr[] = {10, 11, 12, 13, 14, 15, 16};
  int size = 7;
  int index = 0;
  printOddNum(arr, size, index);
  return 0;
}