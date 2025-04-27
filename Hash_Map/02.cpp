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

  if (table.find(2) != table.end())
  {
    cout << "Key Found" << "\n";
    cout << "Value is : " << table[2] << " ";
    
  }
  table.erase(2);
  // trying to find the key:2 again after erasing the key.
  if (table.find(2) != table.end())
  {
    cout << "Key Found" << "\n";
    cout << "Value is : " << table[2] << " ";
    
  }else{
    cout<<"\nNot able to find the key"<<" ";
  }

  return 0;
}