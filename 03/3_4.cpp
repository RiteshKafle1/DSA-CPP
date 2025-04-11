#include<iostream>
using namespace std;

int main(){
  // Half Pyramid
  // for (int i = 0; i <= 4; i++)
  // {
  //   for (int j = 0; j < i+1; j++)
  //   {
  //     cout<<"*";
  //   }
  //   cout<<endl;
    
  // }

    // Inverted Half Pyramid

  for (int i = 0; i <= 3; i++)
  {
    for (int j = 4; j >i  ; j--)
    {
      cout<<"*";
      
    }
    cout<<endl;
    
  }
  
  
  return 0;
}