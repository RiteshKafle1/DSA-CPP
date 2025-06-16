#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void convertBinary(int num)
{
  if (num < 0)
    return;
  if (num == 1)
  {
    cout << "1" << endl;
    return;
  }

  vector<int> output;

  while (num != 1)
  {
    if (num % 2 == 1)
      output.push_back(1);
    else
      output.push_back(0);
    num /= 2;
  }
  if (num)
    output.push_back(1);
  else
    output.push_back(0);

  reverse(output.begin(), output.end());

  for (int a : output)
    cout << a << " ";
}

int main()
{
  int number = 8;
  convertBinary(number);

  return 0;
}