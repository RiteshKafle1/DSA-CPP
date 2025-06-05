#include <iostream>
using namespace std;

void includeExclude(string str, int index, string op)
{
  if (index == str.length())
  {
    cout << op << " ";
    return;
  }
  char currChar = str[index];
  includeExclude(str, index + 1, op + currChar);
  includeExclude(str, index + 1, op);
}

int main()
{
  string str = "abc";
  int index = 0;
  string op = "";
  includeExclude(str, index, op);
  return 0;
}