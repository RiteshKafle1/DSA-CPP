#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> arr)
{
  int size = arr.size();
  int low = 0;
  int high = size - 1;
  int mid = 0;
  
  while (mid <= high)
  {

    if (arr[mid] == 0)
    {
      swap(arr[low], arr[mid]);

      mid++;
      low++;
    }
    else if (arr[mid] == 1)
      mid++;
    else
    {
      swap(arr[mid], arr[high]);

      high--;
    }
  }
}
int main()
{
  vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
  sortColors(arr);

  return 0;
}