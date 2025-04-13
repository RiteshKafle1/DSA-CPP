#include <iostream>
using namespace std;

int main()
{

  for (int i = 0; i < 5; i++)
  {
    int num = i + 1;
    for (int j = 0; j < 5 - i; j++)
    {
      if (j == 0 || i == 0)
      {
        cout << num<<" ";
        num++;
      }
      else {
        if(j==5-i-1){
          cout<<5;
        }
        else
          cout<<"  ";
      }
    }
    cout << endl;
  }

  return 0;
}