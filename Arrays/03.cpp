#include <iostream>
#include <algorithm>
using namespace std;

void findSingleNumber(int arr[], int size, int &ansBox)
{
  int i = 0;
  while (i < size - 1)
  {
    if (arr[i] == arr[i + 1])
        i += 2;
      else
        break;
  }
  ansBox = arr[i];
}
int main()
{
  int arr[] = {1, 2, 3, 1, 2, 3, 4,4,5};
  int size = 9;
  sort(arr, arr + size);
  int ansBox = -1;
  findSingleNumber(arr, size, ansBox);
  cout << ansBox << " ";

  return 0;
}