#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int sumByD(vector<int> arr, int div)
{
  int sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    sum += ceil(double(arr[i]) / double(div)); 
  }

  return sum;
}

int smallestDivisor(vector<int> arr,int threshold)
{
  int low = 1;
  // int threshold = 7;
  int high = *max_element(arr.begin(), arr.end());
  int ans = -1;
  int mid = low + (high - low) / 2;
  while (low <= high)
  {
    if (sumByD(arr, mid) <= threshold)
    {
      ans = mid;
      high = mid - 1;
    }
    else
      low = mid + 1;
    mid = low + (high - low) / 2;
  }
  return ans;
}

/*
int ans = INT32_MIN;
for (int i = 0; i < arr.size(); i++)
{
  ans = max(ans, arr[i]);
}

int size = arr.size();
int sum = 0;

int threshold = 6;
for (int i = 1; i <= ans; i++)
{
  sum = 0;
  for (int j = 0; j < size; j++)
  {
    // cout << "I " << i << endl;
    // cout << "J " << j << endl;
    // cout<<"value of J : "<<arr[j]<<endl;

    // cout << "ceilValue " << ceilValue << endl;

    sum += ceil(double(arr[j]) / i);
    if (sum > threshold)
      break;
    // cout << "Sum " << sum << endl;
  }
  // cout << endl;
  if (sum <= threshold)
  {
    return i;
  }
}
return -1;
*/

int main()
{

  vector<int> arr = {44,22,33,11,1};
  int threshold=5;
  int result = smallestDivisor(arr,threshold);
  cout << "The answer is  " << result << endl;

  return 0;
}