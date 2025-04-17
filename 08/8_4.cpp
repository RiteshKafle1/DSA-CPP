#include <iostream>

using namespace std;
// finding the maximum element from the 2d array

int findMaximum(int arr[][3], int row, int col)

{
  int maxvalue = INT32_MIN;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] > maxvalue)
        maxvalue = arr[i][j];
    }
  }
  return maxvalue;
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
  int result = findMaximum(arr, rowSize, colSize);
  cout << "Largest Element is : " << result;

  return 0;
}