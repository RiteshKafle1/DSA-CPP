#include <iostream>

using namespace std;

// finding sum -> col wise and overall.

int findColSum(int arr[][3], int row, int col)

{

  int totalSum = 0;
  int sum;
  for (int j = 0; j < col; j++)
  {
    sum = 0;
    for (int i = 0; i < row; i++)
    {
      sum += arr[i][j];
      totalSum += arr[i][j];
    }
    cout << "Your sum  for col " << j << " ->  " << sum << endl;
  }
  return totalSum;
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
  int result = findColSum(arr, rowSize, colSize);
  cout << "Sum of all  Element is : " << result;

  return 0;
}