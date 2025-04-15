#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  // no of 0s and 1s

  // int zeroCount = 0;
  // int oneCount = 0;

  int arr[] = {0, 0, 1, 1, 0, 1, 1, 1};
  int size = 8;

  //third approach

  sort(arr,arr+size);
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  

  // second apprach
  // for (int i = 0; i < size; i++)
  // {
  //   if (arr[i] == 0)
  //     zeroCount++;
  // }
  // oneCount = size - zeroCount;
  // cout << "No of 1s are: " << oneCount << endl;

  // cout << "No of 0s are: " << zeroCount << endl;

  // fill(arr, arr + zeroCount, 0);
  // fill(arr + zeroCount, arr + size, 1);

  // for (int i = 0; i < size; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  

  // first approach

  // for (int i = 0; i < size; i++)
  // {
  //   if (arr[i] == 0)
  //     zeroCount++;
  //   else
  //     oneCount++;
  // }
  // cout << "No of 1s are: " << oneCount << endl;

  // cout << "No of 0s are: " << zeroCount << endl;

  // for (int j = 0; j < zeroCount; j++)
  // {
  //   arr[j] = 0;
  // }

  // for (int j = zeroCount; j < size; j++)
  // {
  //   arr[j] = 1;
  // }
  // cout << "array becomes: " << endl;
  // for (int i = 0; i < size; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  return 0;
}