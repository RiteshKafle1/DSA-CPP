#include <iostream>
using namespace std;
int findFibo(int n)
{

  if (n == 0 || n == 1)
    return n;
  int finalAns = findFibo(n - 1) + findFibo(n - 2);
  return finalAns;
}
int main()
{
  cout << findFibo(9);
  return 0;
}