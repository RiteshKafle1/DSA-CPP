#include <iostream>
#include <vector>
using namespace std;

int findUpperBound(vector<int> arr, int target)
{

  int low = 0;
  int high = arr.size() - 1;
  int answer = arr.size(); // just a assumption

  int mid = low + (high - low) / 2;
  while (low <= high)
  {
    if (arr[mid] > target)
    {
      answer = mid;
      high = mid - 1;
    }
    else 
      low = mid + 1;

    mid = low + (high - low) / 2;
  }
  return answer;
}

int main()
{
  vector<int> arr = {2, 3, 6, 7, 8, 8, 11, 11, 11, 12};
  int target = 0;
  int result = findUpperBound(arr, target);
  cout << "Result is :" << result << " ";

  return 0;
}