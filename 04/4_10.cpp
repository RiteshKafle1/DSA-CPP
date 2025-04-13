#include <iostream>
using namespace std;

int main()
{

  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6-i; j++)
    {
        if(j==0||i==0||j==6-i-1)
          cout<<"* ";

    }
    cout << endl;
  }

  return 0;
}