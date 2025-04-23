#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
  vector<int> first;

  first.push_back(10);
  first.push_back(20);
  first.push_back(30);
  first.push_back(40);

  // auto it=lower_bound(first.begin(),first.end(),30);
  // auto it=upper_bound(first.begin(),first.end(),30);
  // cout<<*it<<" ";

  auto it=equal_range(first.begin(),first.end(),25);  
  cout<<*it.first<<" ";
  cout<<*it.second<<" ";
  return 0;
}