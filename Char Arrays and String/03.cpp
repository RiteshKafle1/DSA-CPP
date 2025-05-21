#include <iostream>
using namespace std;

int main()
{
  // string
  /*
  string str;

  cout << "Enter the input" << endl;
  // taking input
  // cin >> str;
  str.push_back('r');
  str.push_back('i');
  str.push_back('t');
  str.push_back('e');
  str.push_back('s');
  str.push_back('h');

  // getline(cin, str, 'A');
      // printing the string.
  cout<< str;

  // cout << str[0];
  */
  string str = "Ritesh kafle";
  //  cout<<str.at(0)<<endl;
  //   cout<<str[0]<<endl;
  // cout << str.front() << endl;
  // cout << str.back() << endl;

  // cout << str.length() << endl;

  // auto it = str.begin();
  // while (it != str.end())
  // {
  //   cout << *it << " ";
  //   it++;
  // }

  // cout << str.empty() << endl;
  // str.clear();
  // cout << str.empty() << endl;

  // cout << str.substr(0, 5) << endl;

  string word = "kafle";

  cout << str.find(word) << endl;

  return 0;
}