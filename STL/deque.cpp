#include <iostream>
#include <queue>
using namespace std;
int main()
{

  deque<int> dq;
  dq.push_back(10);
  dq.push_back(20);
  dq.push_back(30);

  dq.push_front(300);
  dq.push_front(400);

  dq.pop_back();
  dq.pop_front();

  // cout << dq.at(0) << endl;
  // cout << dq.at(1) << endl;
  // cout << dq.at(2) << endl;

  cout << dq.size() << endl;
  dq.clear();
  cout << dq.size() << endl;

  // cout<<dq.front()<<endl;
  // cout<<dq.back()<<endl;

  // if (dq.empty())
  //     cout<<"I am empty";
  // else
  //     cout<<"I am not empty";

  // deque<int>:: iterator it=dq.begin();
  // while (it!=dq.end())
  // {
  //   cout<<*it<<"  ";
  //   it++;
  // }

  return 0;
}