#include <iostream>
using namespace std;

// int sum(int a,int b){
//   return a+b;
// }

int multiplyIt(int a, int b, int c)
{
  return a * b * c;
}

// void sayHello()
// {
//   cout << "Hello ,Dear" << endl;
// }

int main()
{
  //  int result=sum(4,5);
  //  cout<<result<<endl;

  int result = multiplyIt(10, 50, 20);
  cout<< result << endl;

  // sayHello();
  return 0;
}