#include <iostream>

using namespace std;
// finding the minimum element from the 2d array

int findMinumun(int arr[][3], int row, int col)

{
  int minvalue = INT32_MAX;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] < minvalue)
        minvalue = arr[i][j];
    }
  }
  return minvalue;
}
int main()
{
  int arr[3][3] = {
      {70, 23, 41},
      {27, 69, 42},
      {56, 1, 18},
  };
  int rowSize = 3;
  int colSize = 3;
  int result = findMinumun(arr, rowSize, colSize);
  cout<<"Smallest Element is : "<<result;

  return 0;
}