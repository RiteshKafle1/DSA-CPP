#include <iostream>
#include <vector>
using namespace std;
int main()
{

  vector<int> nums = {-1, 2, -3, 4, -5, 6, 0, -5, 34, -7};
  int size = nums.size();
  /*
    vector<int> answers;

    int count = 0;
    for (int i = 0; i < size; i++)
    {
      if (nums[i] < 0)
        answers.push_back(nums[i]);
    }

    for (int i = 0; i < size; i++)
    {
      if (nums[i] > 0)
        answers.push_back(nums[i]);
    }

    for (int a : answers)
      cout << a << " ";
    */
  // sorting also can be used;

  int i = 0;
  int j = size - 1;

  // cout << i << " ";
  // cout << j << " ";

  while (i < j)
  {
    
    if (nums[j] > 0)
      j--;

    else if (nums[i] < 0)
      i++;
    else
      swap(nums[i],nums[j]);
  }

  for (int a : nums)
    cout << a << " ";

  return 0;
}