#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i <= 3; i++)
    // {
    //   for (int j = 0; j < i+1; j++)
    //   {
    //     cout<<j+1;
    //   }
    //   cout<<endl;
      
    // }
    for (int i = 0; i <=4 ; i++)
    {
      for (int j = 0; j <= (4-i); j++)
      {
        cout<<j+1 ;
      }
      cout<<endl;
      
    }
    
    
  return 0;
}