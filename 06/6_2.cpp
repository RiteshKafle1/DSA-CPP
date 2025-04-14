#include <iostream>
using namespace std;

//Function with array

void print(int arr[], int size)
{
  cout << "Size of array is: " << size;
  
  cout << "\nElements of array are:\n " ;

    for (int i = 0; i < size; i++)
    {
      cout<<arr[i]<<" ";
    }
    
}

int main()
{

  // int arr[10];
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << "\nEnter the value for:" << i << endl;
  //   cin >> arr[i];
  // }

  // cout << "\nYour values are: " ;
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << arr[i]<<" ";
  // }

  // --------------------------

  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;

  print(arr, size);

  return 0;
}