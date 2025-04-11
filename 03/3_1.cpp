#include <iostream>
using namespace std;

// void printCounting(){
//   for (int i=1;i<=100;i++){
//     cout<<i<<" ";
//   }
// }

// float calculateInterest(float p,float t,float r){

//   return (p*t*r)/100;
// }

bool printPrime(int num)

{
  if (num < 2)
  {
    return false;
  }
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}

int main()
{
  // printCounting();
  // float result=calculateInterest(100.0,2.5,10.00);
  // cout<<result<<endl;
  cout << "Prime Numbers are:\n";

  for (int i = 0; i <= 100; i++)
  {
    if (printPrime(i))
    {
      cout << i << " ";
    }
  }

  return 0;
}