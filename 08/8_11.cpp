#include <iostream>
#include <algorithm>

using namespace std;

int MissingNumber(int arr[], int size)
{

  sort(arr, arr + size);

  for (int i = 0; i < size; i++)
  {
    if (arr[i] != i)
      return i;
  }
  return size;
}
int main()
{

  int arr[2] = {0, 1};
  int size = 2;

  int result = MissingNumber(arr, size);

  cout << result;

  return 0;
}