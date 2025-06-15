#include <iostream>
using namespace std;
// sorting the 0s and 1s using the 2 pointer approach.
void sortArray(int arr[], int size)
{
  int i = 0;
  int j = size - 1;

  while (i<j)
  {
    if (arr[i] < arr[j])
    {
      i++;
      j--;
    }
    else if (arr[i] > arr[j])
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
    else
    {
      if (arr[i] == 1)
        j--;
      else
        i++;
    }
  }

  // printing the array
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr[] = {0, 1, 1, 0, 0, 1, 1, 0, 1};
  int size = 9;

  sortArray(arr, size);

  return 0;
}