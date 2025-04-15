#include <iostream>
using namespace std;

int main()
{
  // any two pair sum == target
  int arr[] = {1, 423, 54, 54, 63, 345, 1, 5};
  int size = 8;

  int target = 500;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (arr[i] + arr[j] == target)

      {
          // prints all the pairs
        cout << arr[i] << " + " << arr[j] << " = " << target;
      }
    }
  }
  cout << "Not Found :)" << endl;

  return 0;
}