#include <iostream>
#include <cmath>
using namespace std;
void convertToDecimal(int number)
{

  int answer = 0;
  int index = 0;
  while (number != 0)
  {
    int currValue = number % 2;
    int subPart = currValue * pow(2, index);
    answer += subPart;
    number /= 10;
    index++;
  }
  cout << answer << " ";
}
int main()
{
  int binaryNumber = 10010;
  convertToDecimal(binaryNumber);
  return 0;
}