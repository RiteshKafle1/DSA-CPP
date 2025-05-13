#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMajorityElement(vector<int> arr)
{
  // brute force
  /*
  int size = arr.size();
  int count = 0;

  int repeat = size / 2;

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        // cout<<"I: "<<i<<" J: "<<j<<endl;
        // cout << arr[i] << " " <<arr[j]<<endl;
        count++;
        // cout << count << " "<<endl;
      }
    }
    if (count > repeat)
      return arr[i];
    if (count < repeat)
      count = 0;
}
  return -1;
  */
  /*

   int size = arr.size();
   int repeat = size / 2;
   unordered_map<int, int> table;

   for (int i = 0; i < size; i++)
   {
     table[arr[i]]++;
   }
   unordered_map<int, int>::iterator it = table.begin();
   while (it != table.end())
   {
     if ((it->second) > repeat)
       return it->first;
     it++;
   }
   return -1;
   */

  int count = 0;
  int element;
  int repeat = (arr.size()) / 2;

  for (int i = 0; i < arr.size(); i++)
  {
    if (count == 0)
    {
      element = arr[i];
      count = 1;
    }
    else if (arr[i] == element)
      count++;
    else
      count--;
  }
  // if I have the element,I am sure that might be mmy answer,if not ,not other could be my answer.
  
  int count1 = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == element)
      count1++;
  }
  if (count1 > repeat)
      return element;
return -1;
  
}
int main()
{
  vector<int> arr = {2, 2, 3, 3, 1, 3, 3};
  int result = findMajorityElement(arr);
  cout <<"Majority element is : "<< result << " ";

  return 0;
}