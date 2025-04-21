#include <iostream>
using namespace std;

void sortColors(int arr[], int size)
{
  int count0 = 0;
  int count1 = 0;
  int count2 = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
      count0++;
    else if (arr[i] == 1)
      count1++;
    else
      count2++;
  }

  for (int i = 0; i < count0; i++)
  {
    arr[i] = 0;
  }

  for (int i = count0; i < (count0+count1); i++)
  {
    arr[i] = 1;
  }

  for (int i = (count0 + count1); i < size; i++)
  {
    arr[i] = 2;
  }
}
int main()
{
  int arr[] = {2, 0, 2, 1, 1, 0};
  int size = 6;
  sortColors(arr, size);

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "  ";
  }

  return 0;
}