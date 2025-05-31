#include <iostream>
using namespace std;
int findPow(int n)
{
  if (n == 1)
    return 2;
  int recursionAns = findPow(n - 1);
  int finalAns = 2 * recursionAns;
  return finalAns;
}
int main()
{
  int n;
  cout << "Enter the value of n " << endl;
  cin >> n;
  cout << " n " << n << endl;

  int result = findPow(n);
  cout << "The power of " << n << " is " << result << " ";
  return 0;
}