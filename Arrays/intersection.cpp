#include <iostream>

#include <vector>
using namespace std;

void intersectionTwoArray(vector<int> &arr1, vector<int> &arr2)

{
  int i = 0;
  int j = 0;
  int size1 = arr1.size();
  int size2 = arr2.size();
  vector<int> finalArray;

  while (i < size1 && j < size2)
  {
    if (arr1[i] != arr2[j]) 
    {
      // cout << "I: " << i << " ";
      // cout << "J: " << j << " ";
      i++;
      // cout << "I: " << i << " " << endl;
    }
    else if ( (arr1[i] == arr2[j]) )
    {
      // cout << "I: " << i << " ";
      // cout << "J: " << j << " ";
      finalArray.push_back(arr1[i]);
      // cout << "Element: " << arr1[i] << " \n";
      i++;
      j++;
      // cout << "I: " << i << " ";
      // cout << "J: " << j << " ";
    }

  }


  for (int a : finalArray)
    cout << a << " ";
}

int main()
{
  vector<int> arr1 = {1, 2, 2, 3, 3, 4, 5, 6};
  vector<int> arr2 = {2, 3, 3, 5, 6, 6, 7};
  intersectionTwoArray(arr1, arr2);

  return 0;
}