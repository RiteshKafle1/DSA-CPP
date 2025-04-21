#include <iostream>
#include <algorithm>
using namespace std;

int missingElementFromDuplicateArray(int arr[], int size)
{
  sort(arr, arr + size);
  int i = 1;
  while (i == arr[i])
  {
    i++;
  }
  return i + 1;
}

int main()
{
  int arr[] = {1, 3, 3, 3, 4};
  int size = 5;
  int ans = missingElementFromDuplicateArray(arr, size);
  cout << ans << endl;
  return 0;
}