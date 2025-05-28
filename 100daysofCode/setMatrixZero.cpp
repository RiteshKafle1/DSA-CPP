#include <iostream>
using namespace std;
// better solution
// -> set matrix zeros.

void markZero(int arr[][4], int rowSize, int colSize, int row[], int col[])
{
  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      if (row[i] == 1 || col[j] == 1)
        arr[i][j] = 0;
    }
  }

  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
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

  int row[rowSize] = {0};
  int col[colSize] = {0};

  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      if (arr[i][j] == 0)
      {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }
  markZero(arr, rowSize, colSize, row, col);

  return 0;
}