#include <iostream>
#include <vector>
using namespace std;
int findInsertPosition(vector<int> arr, int target)
{
  int low = 0;
  int high = arr.size() - 1;
  int mid = low + (high - low) / 2;
  int ans = arr.size();
  while (low <= high)
  {
    if (arr[mid] >= target)
    {
      ans = mid;
      high = mid - 1;
    }

    else
      low = mid + 1;

    mid = low + (high - low) / 2;
  }
}
int main()
{
  vector<int> arr = {1, 2, 4, 7};
  int target = 6;
  int result = findInsertPosition(arr, target);
  return 0;
}