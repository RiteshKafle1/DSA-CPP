#include <iostream>
using namespace std;

int findNumberofTallestCandle(int arr[], int size)
{
  int count = 0;
  int minValue = INT16_MIN;

  for (int i = 0; i < size; i++)
  {
    if (minValue < arr[i])
      minValue = arr[i];
  }
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == minValue)
      count++;
  }

  return count;
}

int main()
{
  int arr[] = {4, 1, 1, 4, 3, 4};
  int size = 6;
  int result = findNumberofTallestCandle(arr, size);
  cout << "Total : " << result << " ";
  return 0;
}