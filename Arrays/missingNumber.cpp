#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// missing number in the [1,n].

int MissingNumber(vector<int> arr)
{
  //  method 1.
  int actualSum = 0;
  for (int i = 1; i <= (arr.size()+1); i++)
  {
    // cout << "i " << i << " ";
    actualSum += i;
    // cout << endl; 
  }
  // cout << actualSum << " ";
  int givenNumSum = 0;
  for (int i = 0; i < (arr.size()); i++)
  {
    givenNumSum += arr[i];
  }
  // cout << givenNumSum << " ";
  return (actualSum - givenNumSum);
  

  // method 2.
  
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 1; i <= (arr.size() + 1); i++)
    {
      xor1 ^= i;
    }

    for (int i = 0; i < (arr.size()); i++)
    {
      xor2 ^= arr[i];
    }
    return (xor1 ^ xor2);
      

  // brute force method,

  // for (int i = 1; i <= arr.size() + 1; i++)
  // {
  //   // cout << "I " << i << " \n";
  //   for (int j = 0; j < arr.size(); j++)
  //   {
  //     // cout << "J " << j << " \n";

  //     if (arr[j] == i)
  //       break;

  //     else if (arr[j] != i && j == arr.size() - 1)
  //     {

  //       // cout << "Element " << arr[j] << " " << endl;
  //       return i;
  //     }
  //   }
  // }
}
int main()
{
  vector<int> arr = {1, 2, 4, 5};

  int result = MissingNumber(arr);

  cout << result;

  return 0;
}