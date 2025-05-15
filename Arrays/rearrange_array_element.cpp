#include <iostream>
#include <vector>
using namespace std;

void rearrageArrayElement(int arr[], int size)
{

  /* brute force method.
  int j = 0;

  for (int i = 0; i < arr.size(); i++)
  {
    while (j < arr.size())
    {
      if (!(i & 1))
      {
        if (arr[i] > 0)
          break;
        else if (arr[j] < 0)
          j++;
        else if (arr[j] > 0)
        {
          swap(arr[i], arr[j]);
          break;
        }
      }
      else
      {
        if (arr[i] < 0)
          break;
        else if (arr[j] > 0)
          j++;
        else if (arr[j] < 0)
        {
          swap(arr[i], arr[j]);
          break;
        }
      }
    }
  }
  return arr;
  */
  // int size = arr.size();
  /*
  vector<int> positiveArr;
  vector<int> NegativeArr;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > 0)
      positiveArr.push_back(arr[i]);
    else if (arr[i] < 0)
      NegativeArr.push_back(arr[i]);
  }

  int i = 0;


  while (i < size)
  {
    arr[i] = positiveArr[k];

    i++;
    arr[i] = NegativeArr[k];
    i++;
    k++;
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
    */
  /*

 int i = 0;
 int j = 0;
 int k = j + 1;
 int ansArr[size];

 while (i < size)
 {
   if (arr[i] > 0)
   {
     ansArr[j] = arr[i];
     j += 2;
   }
   else if (arr[i] < 0)
   {
     ansArr[k] = arr[i];
     k += 2;
   }
   i++;
 }
 for (int i = 0; i < size; i++)
 {
   cout << ansArr[i] << " ";
 }
   */

  // not equal size of positive and negative.

  vector<int> negArr;
  vector<int> posArr;

  for (int i = 0; i < size; i++) //O(n)
  {
    if (arr[i] < 0)
      negArr.push_back(arr[i]);
    else
      posArr.push_back(arr[i]);
  }
  // cout << negArr.size() << endl;

  int i = 0; // represent our neg and pos array.
  int k = 0; // represent our actual array.
  while (i<negArr.size()) //O(min(pos,neg))
  {

    arr[k] = posArr[i];
    k++;
    arr[k] = negArr[i];
    i++;
    k++;
  }
  // cout << endl;
  //remaining positive array are inserted.

  int p = negArr.size(); //index that represent remaining positive. 
  int a = negArr.size() * 2; // index that represent start to insert.
  while (p < posArr.size()) //O()
  {
    arr[a]=posArr[p];
    p++;
    a++;
  }

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  // int arr[] = {3, 1, -2, -5, 2, -4};
  // int arr[] = {-1, 2, 3, 4, -3, 1};
  int arr[] = {-1, 2, 3, 4, -3, 1};
  int size = 6;
  rearrageArrayElement(arr, size);

  return 0;
}