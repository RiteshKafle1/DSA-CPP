#include <iostream>
#include<algorithm>
using namespace std;

int duplicateNumber(int arr[])
{
  int i = 0;
  while (arr[i] != arr[arr[i]])
  {
      swap(arr[i],arr[arr[i]]);
  }
  return arr[i];
}
int main()
{
  int arr[] = {3,1,3,4,2};

  int ans = duplicateNumber(arr);
  cout << ans << " ";

  return 0;
}