#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMajorityElement(vector<int> arr)
{
  // brute force

  /*
  int size = arr.size();


  int repeat = size / 3;

  for (int i = 0; i < size; i++)
  {
     int count = 0;

    cout << "I: " << i << " " << endl;
    for (int j = 0; j < size; j++)
    {
      cout << "J: " << j << " " << endl;
      if (arr[i] == arr[j])
      {
        count++;
        cout << "Count" << count << " " << endl;
      }

    }
    if (count > repeat)
        return arr[i];

  }
  return -1;
  */

  /*
  int size = arr.size();
   int repeat = size / 3;
   unordered_map<int, int> table;
   vector<int> ansArr;

   for (int i = 0; i < size; i++)
   {
     table[arr[i]]++;

     if(table[arr[i]]>repeat)
        ansArr.push_back(arr[i]);
   }
        */

  int count1 = 0;
  int count2 = 0;
  int element1;
  int element2;
  int repeat = (arr.size()) / 3;

  for (int i = 0; i < arr.size(); i++)
  {
    if (count1 == 0 && element2 != arr[i])
    {
      element1 = arr[i];
      count1 = 1;
    }
    else if (count2 == 0 && element1 != arr[i])
    {
      element2 = arr[i];
      count2 = 1;
    }
    else if (arr[i] == element1)
      count1++;
    else if (arr[i] == element2)
      count2++;
    else
    {
      count1--;
      count2--;
    }
  }
  // if I have the element,I am sure that might be mmy answer,if not ,not other could be my answer.

  count1 = 0;
  count2 = 0;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == element1)
      count1++;
    else if (arr[i] == element2)
      count2++;
  }
  vector<int> ansArr;
  if (count1 > repeat)
    ansArr.push_back(element1);

  if (count2 > repeat)
    ansArr.push_back(element2);

  for (int a : ansArr)
    cout << a << " ";
  return 0;
}
int main()
{
  vector<int> arr = {3, 3, 2, 2, 1, 1, 1, 2};
  int result = findMajorityElement(arr);
  // cout << "Majority element is : " << result << " ";

  return 0;
}