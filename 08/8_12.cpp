#include <iostream>
#include <algorithm>

using namespace std;

int RemoveDuplicate(int arr[], int size)
{
  int i = 0;
  int j = i + 1;
  while (j < size )
  {
    if (arr[i] == arr[j])
      j++;
    else
    {
      i++;
      arr[i] = arr[j];
      j++;
    }
  }
  return i + 1;
}
int main()
{

  int arr[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  int size = 10;

  int result = RemoveDuplicate(arr, size);
  cout << result;

  return 0;
}