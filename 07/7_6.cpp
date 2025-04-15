#include <iostream>
using namespace std;

int main()
{
  // shift by n
  int arr[] = {10, 20, 30, 40, 50, 60};
  int size = 6;
  int shift = 2;
  int finalShift = shift % size;

  if (finalShift == 0)
    return -1; // do nothing.

  int temp[100];
  int index = 0;
  for (int i = size - finalShift; i < size; i++)
  {
    temp[index] = arr[i];
    index++;
  }
  for (int i = size - 1; i >= 0; i--)
  {
    if (i - finalShift >= 0)
      arr[i] = arr[i - finalShift];
  }
  for (int i = 0; i < finalShift; i++)
  {
    arr[i] = temp[i];
  }

  cout << "Your array becomes:\n";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "  ";
  }

  return 0;
}