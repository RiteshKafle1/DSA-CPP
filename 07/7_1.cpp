#include <iostream>
using namespace std;
int main()
{
  // finding the unique element.

  int ans = 0;
  int arr[] = {1, 2, 3, 4, 0, 1, 2, 3, 4};
  int size = 9;
  // for (int i = 0; i < 9; i++)
  // {
  //   ans = ans ^ arr[i];
  // }
  // cout<<ans;
  //

  //next approach

  for (int i = 0; i < size; i++)
  {
    int count=0;
    for (int j = 0; j < size; j++)
    {
      if(arr[i]==arr[j])
        count++;
    }
    if(count==1){
      cout<<arr[i]<<endl;
      break;
    }
  }

  return 0;
}