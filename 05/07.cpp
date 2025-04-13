#include <iostream>

using namespace std;

int main()
{
  int num = 1;
  for (int i = 0; i < 4; i++)
  {

    for (int j = 0; j < (2 * i + 1); j++)
    {
      
        if (j % 2 == 0){
          cout << num << " ";
        num++;
      }
      else cout << "*" << " ";
    }
    cout << endl;
  }

  return 0;
}