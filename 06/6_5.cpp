#include <iostream>
#include <climits>

using namespace std;

int findMin(int arr[], int size)
{
  int Value = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    // if (arr[i] < Value)
    //   Value = arr[i];
    Value = min(Value, arr[i]);
  }
  return Value;
}

int main()
{
  int arr[] = {1, 200, 3, 4, 5, 6, 4700, 8, -9, 1000};
  int size = 10;
  int minValue = findMin(arr, size);
  cout << "Maximum Value is: " << minValue << endl;
  return 0;
}