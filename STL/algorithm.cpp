#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

// void printValue(int a)
// {
//   cout << a << "  ";
// }

bool giveEven(int a)
{
  if (!(a & 1))
    return true;
  else
    return false;
}

int main()
{

  vector<int> first(5);

  iota(first.begin(),first.end(),200);

  for(int i:first)
      cout<<i<<" ";

  // vector<int> first;

  // first.push_back(10);
  // first.push_back(20);
  // first.push_back(30);
  // first.push_back(40);

  // vector<int> result(first.size());

  // partial_sum(first.begin(),first.end(),result.begin());

  // for(int a:result)
  //     cout<<a<<"  ";

  // vector<int> arr;
  // vector<int> arr1;

  // arr.push_back(1);
  // arr.push_back(2);
  // arr.push_back(3);
  // arr.push_back(4);
  // arr.push_back(5);

  // arr1.push_back(1);
  // arr1.push_back(2);
  // arr1.push_back(3);
  // arr1.push_back(4);
  // arr1.push_back(5);

  // auto totalSum=accumulate(arr.begin(),arr.end(),0);
  // cout<<totalSum<<endl;

  // auto finalProduct = inner_product(arr.begin(), arr.end(), arr1.begin(), 0);
  // cout << finalProduct << endl;
   














  // vector<int> arr;
  // arr.push_back(10);
  // arr.push_back(50);
  // arr.push_back(19);
  // arr.push_back(20);
  // arr.push_back(10);

  // partition(arr.begin(),arr.end(),giveEven);
  // for(int i:arr)
  //     cout<<i<<" ";

  // for_each(arr.begin(), arr.end(), printValue);
  // int target = 60;
  // auto it = find(arr.begin(), arr.end(), target);
  // cout << *it << endl;

  // auto it = find_if(arr.begin(), arr.end(), giveEven);
  // cout << *it << endl;
  // int target=40;
  // int ans=count(arr.begin(),arr.end(),target);
  // cout<<ans;

  //  auto it=unique(arr.begin(),arr.end());
  //  arr.erase(it,arr.end());
  //  for(int i:arr){
  //   cout<<i<<"  ";
  //  }
  return 0;
}