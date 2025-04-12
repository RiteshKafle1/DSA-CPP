#include <iostream>
using namespace std;

void hollowPyramid()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5 - i - 1; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < i + 1; k++)
    {
      if (k == 0 || k == i + 1 - 1)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}

void invertedHollowPyramid()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int k = 0; k < 5 - i; k++)
    {
      if (k == 0 || k == 5 - i - 1)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}

void diamondHolow()
{
  hollowPyramid();
  invertedHollowPyramid();
}

int main()
{
  diamondHolow(); 

  return 0;
}