#include <iostream>

using namespace std;

bool findTarget(int arr[], int size, int target)
{

  // for (int i = 0; i < size; i++)
  for (int i = size - 1; i >= 0; i--)
  {

    if (arr[i] == target)
      return true;
  }

  return false;
}

int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int size = 6;
  int target = 1;

  if (findTarget(arr, size, target))
    cout << "Your elelment is:" << target;
  else
    cout << "Couldnot found your element";

  return 0;
}