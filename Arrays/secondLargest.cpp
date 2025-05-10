#include <iostream>
#include <climits>

using namespace std;

int findSecondMax(int arr[], int size)
{
  // int Value = INT_MIN;
  // for (int i = 0; i < size; i++)
  // {
  //   // if (arr[i] > Value)
  //   //   Value = arr[i];
  //   Value = max(Value, arr[i]);
  // }
  // int secondLargest = 0;
  // for (int i = 0; i < size; i++)
  // {
  //   if (arr[i] < Value)
  //       secondLargest = arr[i];
  // }
  // return secondLargest;

  int maxValue = arr[0];
  int secondLargest = -1;
  for (int i = 1; i < size; i++)
  {
    if ((arr[i] > maxValue))
    {
      secondLargest = maxValue;
      // cout << "second Largest : " << secondLargest << " " << endl;
      maxValue = arr[i];
      // cout << "maxValue " << maxValue << " " << endl;
    }
    else if ((arr[i] > secondLargest) && (arr[i] < maxValue))
      secondLargest = arr[i];
  }
  return secondLargest;
}

int main()
{
  int arr[] = {1, 2, 4, 7, 7, 5};
  int size = 6;
  int maxValue = findSecondMax(arr, size);
  cout << " second Maximum Value is: " << maxValue << endl;
  return 0;
}