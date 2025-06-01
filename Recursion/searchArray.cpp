#include <iostream>
using namespace std;

bool findTarget(int arr[], int size, int target, int index)
{
  if (index == size)
    return false;
  if (arr[index] == target)
    return true;
  findTarget(arr, size, target, index + 1);
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  int size = 5;
  int target = 400;
  int index = 0;
  if (findTarget(arr, size, target, index))
    cout << "We found the element" << " ";
  else
    cout << " We couldnot found the element" << " ";

  return 0;
}