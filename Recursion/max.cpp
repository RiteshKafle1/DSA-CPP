#include <iostream>
using namespace std;

/*
int findMaximum(int arr[], int size, int ans, int index)
{
  if (index == size)
    return ans ;
  if (ans < arr[index])
    ans = arr[index];
  findMaximum(arr, size, ans, index + 1);
  // return ans;
}
  */
void findMaximum(int arr[],int size,int &ans,int index){
  if(index==size)
    return ;

  if( ans<arr[index])
    ans=arr[index];
  
  findMaximum(arr,size,ans,index+1);
}

int main()
{
  int arr[] = {10, 20, 40, 50, 60};
  int size = 5;
  int ans = INT32_MIN;
  ;
  int index = 0;
  // cout << findMaximum(arr, size, ans, index);
  findMaximum(arr,size,ans,index);
  cout<<"Maximum Value is "<<ans<<" ";
  return 0;
}