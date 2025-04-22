#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<int> q;

  q.push(20);
  q.push(30);
  q.push(40);

  queue<int> q1;

  q1.push(1);
  q1.push(2);
  q1.push(3);

  q.swap(q1);

  // --------------

  // q.push(10);
  // q.push(20);
  // q.push(30);

  // cout << q.size();
  // cout << endl;

  // cout << q.front() << " ";
  // cout << q.back() << " ";

  // q.pop();
  // q.pop();

  // cout<<q.size();

  // if(q.empty())
  //   cout<<"I am empty";
  // else
  //   cout<<"I am not empty";
  // --------------------

  return 0;
}