#include <iostream>
using namespace std;
int findSingleElement(int arr[], int size)
{
  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;
  while (s <= e)
  {

    if (s == e)
      return s;
    if ((mid - 1 >= 0) && (arr[mid] == arr[mid - 1]))
    {
      int pairFirstIndexL = mid - 1;

      if (pairFirstIndexL & 1)
        e = mid - 1;
      else
        s = mid + 1;
    }
    else if ((mid + 1 < size) && (arr[mid] == arr[mid + 1]))
    {
      int pairFirstIndexR = mid;

      if (!(pairFirstIndexR & 1))
        s = mid + 1;
      else
        e = mid - 1;
    }
    else
      return mid;
    mid = s + (e - s) / 2;
  }
  return -1;
}
int main()
{
  int arr[] = {3,3,7,7,10,11,11};
  int size = 5;
  int result = findSingleElement(arr, size);
  cout << "Found at  " << result << " ";
  return 0;
}