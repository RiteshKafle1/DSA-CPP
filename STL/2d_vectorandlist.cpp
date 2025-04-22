#include <iostream>
#include <list>
using namespace std;
int main()
{

  list<int> myList;

  myList.push_back(10);
  myList.push_back(20);
  myList.push_back(30);
  // myList.insert(myList.begin(),60);

  // cout<<myList.size()<<endl;

  // cout<<myList.front()<<endl;

  myList.erase(myList.begin(), myList.end());

  cout << myList.size() << endl;

  // ------------------------
  /*
  list<int> first;

  first.push_back(10);
  first.push_back(20);
  first.push_back(30);

  list<int> second;

  second.push_back(100);
  second.push_back(200);
  second.push_back(300);

  first.swap(second);

  list<int>::iterator it=first.begin();
  while (it!=first.end())
  {
    cout<<*it<<"  ";
    it++;
  }
  cout<<endl;


  list<int>::iterator it2=second.begin();
  while (it2!=second.end())
  {
    cout<<*it2<<"  ";
    it2++;
  }
  cout<<endl;
  */
  // -----------------------

  // =========================
  /*
  list<int> myList;

  myList.push_back(10);

  myList.push_back(20);

  myList.push_back(30);

  myList.push_back(40);

  myList.push_front(60);

  myList.push_front(60);

  myList.push_front(10);

  list<int>::iterator it=myList.begin();

  while (it!=myList.end())
  {
      cout<<*it<<"  ";
      it++;
  }
  cout<<endl;

  myList.remove(10);
  myList.remove(60);

  list<int>::iterator it2=myList.begin();

  while (it2!=myList.end())
  {
      cout<<*it2<<"  ";
      it2++;
  }
      */

  // =======================

  // cout<<myList.size()<<endl;

  // cout<<myList.front()<<endl;

  // cout<<myList.back()<<endl;

  // myList.clear();

  // cout<<myList.size()<<endl;

  // if(myList.empty())
  //   cout<<"I am empty :)";
  // else
  //   cout<<"I am not empty ):";

  // vector<vector<int>> v (4,vector<int>(4,0));
  // int totalRows=v.size();
  // int totalColumns=v[0].size();

  return 0;
}