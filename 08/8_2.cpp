#include <iostream>
using namespace std;

int main()
{
  // find the target.
  int arr[3][4] = {
      {10, 20, 30, 40},
      {50, 55, 57, 89},
      {59, 69, 72, 79}

  };

  int rowSize = 3;
  int colSize = 4;
  int target = 30;

  for (int i = 0; i < rowSize; i++)
  {
    for (int j = 0; j < colSize; j++)
    {
      if (arr[i][j] == target)
      {
        cout << "Element found at index : " << i << "," << j;
      }
    }
  }

  cout << "Element Not found :)";

  return 0;
}