#include <iostream>
#include <stack>
using namespace std;
int main()
{

  stack<int> st;

  st.push(10);
  st.push(20);
  st.push(30);

  // cout << st.size() << endl;

  // st.pop();

  // cout << st.size()<<endl;

  // cout<<st.top();

  if (st.empty())
    cout << "i am empty" << endl;
  else
    cout << " i am not empty" << endl;

  return 0;
}