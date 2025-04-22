#include <iostream>
#include <vector>
using namespace std;
int main()
{

  vector<int> first;

  first.push_back(10);
  first.push_back(20);
  first.push_back(30);
  first.push_back(40);

  // traverse through a vector.
  vector<int>::iterator it = first.begin();

  while (it != first.end())
  {
    cout << *it << "  ";
    it++;
  }

  // ========================
  // vector<int> first;
  // vector<int> second;

  // first.push_back(10);
  // first.push_back(20);
  // first.push_back(30);
  // first.push_back(40);
  // first.push_back(50);

  // second.push_back(100);
  // second.push_back(200);
  // second.push_back(300);
  // second.push_back(400);

  // second.swap(first);

  // for (int i : first)
  // {
  //   cout << i << " ";
  // }

  // for (int i : second)
  // {
  //   cout << i << " ";
  // }
  // ===========================

  // creation of vector
  // vector<int> marks;
  // cout << marks.capacity() << endl; // 0

  // marks.reserve(10);
  // cout << marks.capacity() << endl; // 10

  // marks.push_back(10);
  // marks.push_back(20);
  // marks.push_back(30);

  // marks.clear();
  // marks.insert(marks.begin(),60);
  // cout<<marks.at(0)<<endl;

  // marks.erase(marks.begin(),marks.end());
  // marks.erase(marks.begin(), marks.begin() + 2);
  // cout << marks.size() << endl;

  // for (int i = 0; i < marks.size(); i++)
  // {
  //   cout << marks.at(i) << "  ";
  // }

  // cout<<marks.size()<<endl;

  // // inserting to a vector
  // marks.push_back(10);
  // marks.push_back(20);
  // marks.push_back(30);
  // marks.push_back(40);

  // cout<<marks.size()<<endl;

  // ---------------------

  // accessing the value through index of the vector.

  // cout<<marks[0]<<endl;
  // cout<<marks[2]<<endl;
  // cout<<marks[3]<<endl;

  // cout<<marks.at(0)<<endl;
  // cout<<marks.at(1)<<endl;
  // cout<<marks.at(2)<<endl;

  // --------------------------

  // if(marks.empty())
  //   cout<<"vector is empty"<<endl;
  // else
  //   cout<<"Not empty"<<endl;

  // marks.push_back(50);

  // marks.pop_back();

  // cout << marks.size() << endl;

  // accesssing the first and last element

  // cout<<(marks.front())<<endl;
  // cout<<(marks.back())<<endl;
  // cout << marks.capacity() << endl;
  // ------------------------------------

  // cout << *(marks.begin()) << endl;

  return 0;
}