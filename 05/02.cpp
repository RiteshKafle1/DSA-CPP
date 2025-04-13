#include <iostream>
using namespace std;

void giveEven(int a, int b)
{

  for (int i = a; i < b; i++)
  {

    if (!(i & 1))
      cout << i << endl;
  }
}

void solve(int &n) //n
{
  n = n + 10;
  
}

int main()
{
  int val = 10;
  solve(val);
  cout << val;

  // cout << "Even Numbers are:\n";
  // giveEven(1, 10);



  return 0;
}