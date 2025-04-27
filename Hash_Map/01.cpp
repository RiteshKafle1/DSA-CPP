#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  unordered_map<int, int> table;
 
  table[1] = 46;
  table[2] = 56;
  table[3] = 66;
  table[4] = 76;
  table[5] = 86;

  // cout<<table.size()<<" ";

  unordered_map<int, int>::iterator it = table.begin();

  while (it != table.end())
  {
    int key = it->first;
    int value = it->second;

    cout << " Key " << key << " value " << value << "  ";
    cout << endl;
    it++;
  }

  return 0;
}