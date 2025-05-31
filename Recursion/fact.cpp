#include <iostream>
using namespace std;
int findFact(int n)
{

  if (n == 0)
    return 1;

  int recursionAns = findFact(n - 1);
  int finalAns = n * recursionAns;
  return finalAns;
}
int main()
{
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;
  int result = findFact(n);
  cout << "The factorial of " << n << " is " << result << " ";
  return 0;
}