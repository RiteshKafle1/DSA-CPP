#include <iostream>
#include <vector>
using namespace std;

int findMaximumConsecutiveOne(vector<int> arr)
{
  int size = arr.size();
  int count = 0;
  int finalCount = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 1)
    {
      count++;
      finalCount = max(count, finalCount);
    }
    else
      count = 0;
  }
  return finalCount;
}

int main()
{
  vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
  int result = findMaximumConsecutiveOne(arr);
  cout << "Maximum ConsecutiveOne is : ";
  cout << result << " ";
  return 0;
}