#include <iostream>

using namespace std;

void transpose(int arr[][3], int row, int col)

{
  // int ans[100][100] = {0};
  // for (int j = 0; j < col; j++)
  // {
  //   for (int i = 0; i < row; i++)
  //   {
  //     ans[i][j] = arr[j][i];
  //   }
  // }
  // for (int i = 0; i < row; i++)
  // {
  //   for (int j = 0; j < col; j++)
  //   {
  //     cout << ans[i][j] << "  ";
  //   }
  //   cout << endl;
  // }

  // another approach
  for (int i = 0; i < row; i++)
  {
    for (int j = i; j < col; j++)
    {
      swap(arr[i][j], arr[j][i]);
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << "  ";
    }
    cout << endl;
  }
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
  transpose(arr, rowSize, colSize);

  return 0;
}