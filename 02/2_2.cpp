#include <iostream>
using namespace std;

int main()
{
  int x = 90;
  int y = 100;

  //  (x > y) ? cout << "x is greater than y" : cout << "x is less than y" <<endl;

  int result = (x > y) ? x : y ;
  cout << "The Greater value  is : " << result << endl;
  return 0;
}