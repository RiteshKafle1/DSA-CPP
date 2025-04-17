#include <iostream>

using namespace std;


int findDiagonalSum(int arr[][3], int row, int col)

{

  int totalSum = 0;

  // for (int i = 0; i < row; i++)
  // {

  //   for (int j = 0; j < col; j++)
  //   {
  //     if (i == j)
  //       totalSum += arr[i][j];
  //   }
  // }
  // return totalSum;

  // next approach

  // for (int i = 0; i < row; i++)
  // {
  //   totalSum+=arr[i][i];
  // }
  // return totalSum;

  //
 }
int main()
{
  int arr[3][3] = {
      {70, 80, 40},
      {20, 60, 40},
      {50, 10, 10},
  };
  int rowSize = 3;
  int colSize = 3;
  int result = findDiagonalSum(arr, rowSize, colSize);
  cout << "Sum of diagonal  Element is : " << result;

  return 0;
}