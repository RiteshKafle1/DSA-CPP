#include <iostream>
using namespace std;
int main()
{
  // introduction to 2d array.
  int arr[3][3] = {
      {10, 20, 30},
      {40, 30, 20},
      {50, 60, 40},
  };

  // cout << arr[0][0] << endl;
  // cout << arr[1][0] << endl;
  // cout << arr[1][1] << endl;
  // cout << arr[2][1] << endl;

  // looping through the entire array
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 2; j++)
  //   {
  //     cout << arr[i][j] << "  ";
  //   }
  //   cout << endl;
  // }

  //   for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 2; j++)
  //   {
  //     if(i==j)
  //       cout << arr[i][j] << "  ";
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < 3; i++)
  // {
  //   cout<<arr[i][i]<<endl;
  // }

  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     if (i + j == 2)
  //       cout << arr[i][j] << endl;
  //   }
  // }



  //   for (int j = 0; j < 2; j++)
  // {
  //   for (int i = 0; i < 3; i++)
  //   {
  //     cout << arr[i][j] <<"  ";
  //   }
  //   cout<<endl;

  //   }

  // fill(&arr[0][0], &arr[0][0] + 3 * 2, 10);

  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 2; j++)
  //   {
  //     cout << arr[i][j] << "  ";
  //   }
  //   cout << endl;
  // }

  return 0;
}