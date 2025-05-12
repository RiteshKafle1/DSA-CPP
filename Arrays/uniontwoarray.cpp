#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>
using namespace std;

void unionTwoArray(int arr[], int size1, int brr[], int size2)
{
  /*
  finding the union

    set<int> s;
  for (int i = 0; i < size1; i++) TC-> O(n logn)
  {
    s.insert(arr[i]);
  }

  for (int i = 0; i < size2; i++) TC-> O(m logn)
  {
    s.insert(brr[i]);
  }

  set<int>::iterator it = s.begin();
  while (it != s.end())
  {
    cout << *it << " ";
    it++;
  }
    */
  // finding the intersection
  /*
  unordered_map<int, int> table;

  for (int i = 0; i < size1; i++)
  {
    table[arr[i]]++;
  }
  for (int i = 0; i < size2; i++)
  {
    table[brr[i]]--;
  }

  unordered_map<int, int>::iterator it = table.begin();
  while (it != table.end())
  {
    if (it->second <= 0)
      cout << it->first << " ";
    it++;
  }
    */

  vector<int> unionArray;

  int i = 0;
  int j = 0;
  while (i < size1 && j < size2)
  {

    if (arr[i] <= brr[j])
    {
      if (unionArray.size() == 0 || unionArray.back() != arr[i])
      {
        unionArray.push_back(arr[i]);
      }
      i++;
    }
    else
    {
      if (unionArray.size() == 0 || unionArray.back() != brr[j])
      {
        unionArray.push_back(brr[j]);
      }
      j++;
    }
  }
  while (i < size1)
  {
    if (unionArray.size() == 0 || unionArray.back() != arr[i])
    {
      unionArray.push_back(arr[i]);
    }

    i++;
  }
  while (j < size2)
  {
    if (unionArray.size() == 0 || unionArray.back() != brr[j])
    {
      unionArray.push_back(brr[j]);
    }

    j++;
  }

  for (int a : unionArray)
    cout << a << " ";
}



int main()
{
  int arr[] = {1, 1, 2, 3, 4, 5};
  int size1 = 6;

  int brr[] = {2, 3, 4, 4, 5, 6};
  int size2 = 6;
  unionTwoArray(arr, size1, brr, size2);
  return 0;
}