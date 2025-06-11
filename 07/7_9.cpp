#include <iostream>
using namespace std;
//sorting the 0s and 1s using the 2 pointer approach.
void sortArray(int arr[], int size)
{
  int i = 0;
  int j = i + 1;

  while (j < size)
  {
    if (arr[i] <= arr[j])
      j++;
    else if (arr[i] > arr[j])
    {
      swap(arr[i], arr[j]);
      i++;
      j++;
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
  int arr[] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 1};
  int size = 10;

  sortArray(arr, size);

  return 0;
}