#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
  unordered_map<string, string> table;
  table["np"] = "Nepal";
  table["ch"] = "China";
  table["us"] = "United State";

  // auto it =table.find("us");
  // if (it!=table.end())
  //     cout<<it->first<<"  "<<it->second<<endl;
  // else
  //     cout<<"Not Found";

  // cout << table.size() << endl;
  // table.clear();
  // cout << table.size() << endl;

  // cout<<table.at("np")<<endl;

  unordered_map<string, string>::iterator it = table.begin();

  // while (it != table.end())
  // {
  //   // pair<string,string> p=*it;
  //   cout << (it)->first << "  " << (it)->second << endl;

  //   it++;
  // }

  return 0;
}