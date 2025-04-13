#include <iostream>
using namespace std;
int main()
{ // Invetred Numeric hollow pyramid

  for (int i = 0; i < 5; i++)
  {
    int num = i + 1;

    for (int j = 0; j < 5 - i; j++)
    {
      if (j == 0 || i == 0 || j == 4 - i)
      {
        cout << num << " ";
        
      }
      else
        cout << "  ";
      num++;
    }

    cout << endl;
  }
  return 0;
}