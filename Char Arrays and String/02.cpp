#include <iostream>
using namespace std;

int findLength(char arr[])
{
  int i = 0;
  int count = 0;
  while (arr[i] != '\0')
  {
    count++;
    i++;
  }
  return count;
}

void reverseChar(char arr[], int size)
{
  int length = findLength(arr);
  cout << "Length" << length << " ";

  int low = 0;
  int high = length - 1;
  while (low <= high)
  {

    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}

bool palindrome(char arr[])
{
  int len = findLength(arr);
  int low = 0;
  int high = len - 1;
  while (low < high)
  {
    if (arr[low] != arr[high])
      return false;
    low++;
    high--;
  }
  return true;
}

int main()
{
  char arr[100];
  cout << "Enter the input" << endl;
  cin >> arr;

  bool result = palindrome(arr);
  if (result)
    cout << "Its Palindrome" << " ";
  else
    cout << "Its not Palindrome" << " ";
  // reverseChar(arr,100);
  // cout << arr << endl;

  // finding the length of char arrays.
  /* char arr[20];
   cout << "Enter your name" << endl;
   cin >> arr;
   cout << arr;


   cout << " The length is " << count << endl;
 */
  // replace character
  /*
    char arr[100];
    cout << "Enter the input" << endl;
    cin >> arr;
    cout << arr;

    for (int i = 0; i < 100; i++)
    {
      if (arr[i] == '@')
        arr[i] = ' ';
    }
    cout<<endl;
    cout << arr << " ";
  */

  return 0;
}