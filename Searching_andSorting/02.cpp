#include <iostream>
#include <algorithm>
using namespace std;

void firstOccurence(int arr[], int size, int target, int &ansIndex)
{
  int start = 0;
  int end = size - 1;
  int mid;

  while (start <= end)
  {
    mid = start + ((end - start) / 2);

    if (arr[mid] == target)
    {
      ansIndex = mid;
      end = mid - 1;
    }
    else if (target > arr[mid])
      start = mid + 1;
    else if (target < arr[mid])
      end = mid - 1;
  }
}


void lastOccurence(int arr[], int size, int target, int &ansIndex)
{
  int start = 0;
  int end = size - 1;
  int mid;

  while (start <= end)
  {
    mid = start + ((end - start) / 2);

    if (arr[mid] == target)
    {
      ansIndex = mid;
      start = mid + 1;
    }
    else if (target > arr[mid])
      start = mid + 1;
    else if (target < arr[mid])
      end = mid - 1;
  }
}

int main()
{
  
  int arr[] = {
      20,
      20,
      20,
      30,
      40,
      50,
      60,
  };
  int size = 8;
  int target = 20;
  int ansIndex = -1; // target not found.

  firstOccurence(arr, size, target, ansIndex);

  cout << "First Occurence of " << target << " is " << ansIndex << endl;

  lastOccurence(arr, size, target, ansIndex);

  cout << "Last Occurence of " << target << " is " << ansIndex;

  return 0;
}