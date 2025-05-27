#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int number)
{
  int primeCount = 0;
  int n = sqrt(number);
  for (int i = 1; i <= n; i++)
  {
    if (number % i == 0)
    {
      primeCount++;
      if ((number / i) != i)
        primeCount++;
    }
  }
  if (primeCount == 2)
    return true;
  else
    return false;
}
int main()
{
  // int number = 12;
  int number;
  cout << "Enter the number" << endl;
  cin >> number;
  if (checkPrime(number))
    cout << "Its a prime" << " ";
  else
    cout << "Its not a prime" << " ";
  return 0;
}