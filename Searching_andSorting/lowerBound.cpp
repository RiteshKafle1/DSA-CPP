#include <iostream>
#include <vector>
using namespace std;

int findLowerBound(vector<int> arr, int target)
{

  int low = 0;
  int high = arr.size() - 1;
  int answer = arr.size();  //just a assumption

  int mid = low + (high - low) / 2;
  while (low <= high)
  {
    if (arr[mid] >= target)
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
  vector<int> arr = {1,2,3,3,7,8,8,10,10,11};
  int target = 9;
  int result = findLowerBound(arr, target);
  cout << "Result is :" << result << " ";

  return 0;
}