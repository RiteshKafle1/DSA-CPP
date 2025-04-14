#include <iostream>
#include <climits>

using namespace std;

int findMax(int arr[], int size)
{
  int Value = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    // if (arr[i] > Value)
    //   Value = arr[i];
    Value = max(Value, arr[i]);
  }
  return Value;
}

int main()
{
  int arr[] = {1, 200, 3, 4, 5, 6, 4700, 8, -9, 1000};
  int size = 10;
  int maxValue = findMax(arr, size);
  cout << "Maximum Value is: " << maxValue << endl;
  return 0;
}