#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> missingNumber(int brr[], int sizeA, int arr[], int sizeB)
{

  unordered_map<int, int> table;
  for (int i = 0; i < sizeA; i++)
  {
    int num = brr[i];
    table[num]++;
  }
  for (int i = 0; i < sizeB; i++)
  {
    int num = arr[i];

    table[num]--;
  }

  unordered_map<int, int>::iterator it = table.begin();
  vector<int> ans;
  while (it != table.end())
  {
    // cout << it->first << " " << it->second << endl;
    if (it->second == 1)
      // cout<<it->first<<" ";
      ans.push_back(it->first);

    it++;
  }
  return ans;
}

int main()
{
  int brr[] = {7, 2, 5, 4, 6, 3, 5, 3, 1, 1};
  int arr[] = {7, 2, 5, 3, 5, 3, 1};
  int sizeB = 7;
  int sizeA = 10;
  auto ans = missingNumber(brr, sizeA, arr, sizeB);
  for (int a : ans)
    cout << a << " ";
  return 0;
}