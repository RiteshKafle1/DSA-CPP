#include <iostream>
#include <vector>
using namespace std;
vector<int> findAllDuplicates(int arr[], int size)
{
  int i = 1;

  vector<int> ans;
  while (i < size)
  {
    long long int index = abs(arr[i]);

    if (arr[index] < 0)
    {
      ans.push_back(abs(arr[i]));
      i++;
    }
    else
    {
      arr[index] = -arr[index];
      i++;
    }
  }
  return ans;
}
int main()
{
  int arr[] = {7, 3, 2, 4, 8, 2, 3, 1};
  int size = 8;
  auto a = findAllDuplicates(arr, size);

  for (int arr : a)
    cout << arr << " ";
  return 0;
}