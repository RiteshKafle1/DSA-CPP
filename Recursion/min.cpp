#include <iostream>
using namespace std;

void findMinimum(int arr[],int size,int &ans,int index){
  if(index==size)
    return ;

  if( ans>arr[index])
    ans=arr[index];
  
  findMinimum(arr,size,ans,index+1);
}

int main()
{
  int arr[] = {10, 20, 40, 50, 60};
  int size = 5;
  int ans = INT32_MAX;
  ;
  int index = 0;
  // cout << findMaximum(arr, size, ans, index);
  findMinimum(arr,size,ans,index);
  cout<<"Minimum Value is "<<ans<<" ";
  return 0;
}