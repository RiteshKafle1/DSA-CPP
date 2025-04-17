#include <iostream>

using namespace std;

int PivotIndex(int arr[], int size)
{
  int lsum[size] = {0};
  int rsum[size] = {0};

  for (int i = 1; i < size; i++)
  {
    lsum[i] = lsum[i - 1] + arr[i - 1];
  }
  for (int j = size - 2; j >= 0; j--)
  {
    rsum[j]=rsum[j+1]+arr[j+1];
  }
  for (int i = 0; i < size; i++)
  {
      if(lsum[i]==rsum[i])
        return i;
  }
  return -1;
  
}
int main()
{

  int arr[6] = {1, 7, 3, 6, 5, 6};
  int size = 6;

  int result = PivotIndex(arr, size);

  cout << result;

  return 0;
}