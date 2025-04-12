#include <iostream>
using namespace std;

void fullPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        for (int k = 0; k < i + 1; k++)
            cout << "* ";

        cout << endl;
    }
}

void InvertedFullPyramid(int n){

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout<<" ";
    }
    for (int k = 0; k < n-i ; k++)
    {
      cout<<"* ";
    }
    cout<<endl;
    
    
  }
  
}


void diamondPyramid(int n)
{
  fullPyramid(n);

  InvertedFullPyramid(n);
}

int main()
{
  diamondPyramid(10);
  return 0;
}