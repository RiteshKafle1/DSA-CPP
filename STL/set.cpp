#include <iostream>
#include <set>
using namespace std;
int main()
{
  int arr[] = {1, 1, 2, 3, 4, 5};
  int size1 = 6;
  set<int> s;
  for (int i = 0; i < size1; i++)
  {
    s.insert(arr[i]); //T.C -> O(log n)
  }

  // set<int>::iterator it = s.begin();
  // while (it != s.end()) //T.C -> O(n)
  // {
  //   cout << *it << " ";
  //   it++;
  // }

  // auto it = s.find(6); //T.C -> O(log n)
  // if (it != s.end())
  //   cout << "Element Found" << " " << *it;
  // else
  //   cout << "Element Not Found" << " ";

  // cout<<s.size()<<" ";
  // s.erase(5); //T.C -> O(log n)
  // cout<<s.size()<<" ";
  return 0;
}