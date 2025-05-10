#include <iostream>
#include <vector>
using namespace std;

void move0stoend(int arr[], int size)
{
  // vector<int> temp;

  // // moving all the non zero to the temp .
  // for (int i = 0; i < size; i++)
  // {
  //   if (arr[i] != 0)
  //     temp.push_back(arr[i]);
  // }
  // // moving non zero again to original array.
  // for (int i = 0; i < temp.size(); i++)
  // {
  //   arr[i] = temp[i];
  // }
  // // remaining with zero
  // for (int i = temp.size(); i < size; i++)
  // {
  //   arr[i] = 0;
  // }

  int j = -1;
  // finding the first index of 0.
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
    {
      j = i;
      break;
    }
  }
  if(j==-1)
      return;

  int i = j + 1;
  while (i < size)
  {
    if (arr[i] != 0 )
    {
      swap(arr[i], arr[j]);
      j++;
      i++;
    }
    else
    {
      i++;
    }
  }
}

int main()
{
  int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
  int size = 10;
  move0stoend(arr, size);
  for (int a : arr)
  {
    cout << a << " ";
  }
  return 0;
}