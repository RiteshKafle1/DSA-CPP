#include <iostream>
using namespace std;
// brute force appraoch
// -> set matrix zeros.

void markRow(int row, int arr[][4], int rowSize)
{
  for (int i = 0; i < rowSize; i++)
  {
    if (arr[row][i] != 0)
      arr[row][i] = -1;
  }
}
void markColumn(int column, int arr[][4], int colSize)
{
  for (int i = 0; i < colSize; i++)
  {
    if (arr[i][column] != 0)
      arr[i][column] = -1;
  }
}

void markZero(int arr[][4], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] == -1)
        arr[i][j] = 0;
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{

  int arr[4][4] = {
      {1, 1, 1, 1},
      {1, 0, 0, 1},
      {1, 1, 0, 1},
      {1, 1, 1, 1},

  };

  int rowSize = 4;
  int colSize = 4;

  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      if (arr[i][j] == 0)
      {
        markRow(i, arr, rowSize);
        markColumn(j, arr, colSize);
      }
    }
  }
  markZero(arr, rowSize, colSize);

  return 0;
}