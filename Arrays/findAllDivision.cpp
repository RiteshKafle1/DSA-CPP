#include <iostream>
#include <cmath>
using namespace std;

void findAllDivision(int number)
{

  int n = sqrt(number);
  cout << n << endl;

  for (int i = 1; i <= n; i++)
  {

    if (number % i == 0)
    {
      cout << i << " ";
      if ((number / i) != i)
        cout << (number / i) << " ";
    }
  }
}

int main()
{
  int n = 24;
  findAllDivision(n);
  return 0;
}