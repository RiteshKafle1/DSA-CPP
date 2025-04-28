#include <iostream>
#include <vector>
using namespace std;

vector<int> twosComplement(vector<int> input)
{
  int inputSize = input.size();
  // flip the bit.
  for (int i = 0; i < inputSize; i++)
    input[i] = input[i] == 0 ? 1 : 0;

  vector<int> output(inputSize + 1, 0);

  int carry = 1;
  int sum;
  // add it with your carry.
  for (int i = inputSize - 1; i >= 0; i--)

  {
    sum = input[i] + carry;
    output[i + 1] = sum % 2;
    carry = sum / 2;
  }

  if (carry)
    output[0] = 1;

  return output;
}

int main()
{
  vector<int> binary = {1, 1, 1, 0, 1, 0, 1, 1, 0};
  auto result = twosComplement(binary);

  cout << "Given binary number is :\n";
  for (auto a : binary)
    cout << a << " ";

  cout << "\nTwos complement of a given binary number becomes :\n";
  for (auto a : result)
    cout << a << " ";
  return 0;
}