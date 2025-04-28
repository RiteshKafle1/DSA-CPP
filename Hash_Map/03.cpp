#include <iostream>
#include <unordered_map>
using namespace std;

int findSingleNumber(int arr[], int size)
{

  unordered_map<int, int> table;

  for (int i = 0; i < size; i++) 
  {
    int num = arr[i];
    table[num] ++;
  }
  unordered_map<int, int>::iterator it = table.begin();
  while (it != table.end())
  {
    // cout<<it->first<<" "<<it->second<<" "<<endl;
    if (it->second == 1)
      return ( it->first );   
    it++;
  }
  
}

int main()
{
  int arr[] = {1, 2, 3, 1, 2, 3, 4};
  int size = 7;
  int result = findSingleNumber(arr, size);
  cout << "Single Number is : " << result << " ";
  return 0;
}