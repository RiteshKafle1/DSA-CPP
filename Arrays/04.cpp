#include <iostream>
#include <algorithm>
using namespace std;

void sortZsAndOs(int arr[], int size)
{
  int low = 0;
  int high = size-1;

  while (low<=high)
  {
    if (arr[low] == arr[high])
      high--;
    else if (arr[low] < arr[high])
    {
      low++;
    }
    else
    {
      swap(arr[low], arr[high]);
      low++;
      high--;
    }
  }
  cout << "Final Array Becomes \n";

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "  ";
  }
  return;
}
int main()
{
  int arr[] = {0,0,1,1,0,1,1};
  int size = 7;
  // sort(arr, arr + size);
  sortZsAndOs(arr, size);

  return 0;
}