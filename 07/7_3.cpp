#include <iostream>
using namespace std;
int main()
{
  // some approaches with loop
  int arr[] = {10, 20, 30, 40};
  int size = 4;

  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = i; j < size; j++)
  //   {
  //     cout << arr[i] << "," << arr[j] << "  ";
  //   }
  //   cout<<endl;
  // }
    
  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = 0; j < size; j++)
  //   {
  //     cout << arr[i] << "," << arr[j] << "  ";
  //   }
  //   cout<<endl;
  // }

  //   for (int i = 0; i < size; i++)
  // {
  //   for (int j = i; j <= i; j++)
  //   {
  //     cout << arr[i] << "," << arr[j] << "  ";
  //   }
  //   cout<<endl;
  // }

  //   for (int i = 0; i < size; i++)
  // {
  //   for (int j = size-1; j >=0 ; j--)
  //   {
  //     cout << arr[i] << "," << arr[j] << "  ";
  //   }
  //   cout<<endl;
  // }

  //   for (int i = 0; i < size; i++)
  // {
  //   for (int j = size-1; j > i; j--)
  //   {
  //     cout << arr[i] << "," << arr[j] << "  ";
  //   }
  //   cout<<endl;
  // }

  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = i + 1; j < size; j++)
  //   {
  //     cout << arr[i] << "," << arr[j] << "  ";
  //   }
  //   cout << endl;
  // }

  return 0;
}