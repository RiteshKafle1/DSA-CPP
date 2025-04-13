#include <iostream>
using namespace std;

int main()
{

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < (2 * i + 1); j++)
    {
      if (j % 2 == 0)
        cout << i + 1 << " ";
      else
        cout << "* ";
    }
    cout << endl;
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < (2 * 4 - 2 * i - 1); j++)
    {
      if (j % 2 == 0)
        cout << 4 - i << " ";
      else
        cout << "* ";
    }
    cout<<endl;
  }

  return 0;
}