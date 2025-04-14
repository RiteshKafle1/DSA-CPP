#include <iostream>
#include <climits>

using namespace std;

void findZeroOne(int arr[], int size)
{
  int zeroCount = 0;
  int oneCount = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
      zeroCount++;
    if (arr[i] == 1)
      
      oneCount++; 
  }
  cout << "No of zeros are: " << zeroCount << endl;

  cout << "No of ones are: " << oneCount << endl;

  return;
}

int main()
{
  int arr[] = {0, 0, 1, 1, 0, 11, 1, 80, 100, 67};
  int size = 10;
  findZeroOne(arr, size);

  return 0;
}