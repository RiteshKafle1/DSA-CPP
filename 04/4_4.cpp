#include<iostream>
using namespace std;

int main(){
  // inverted hollow full pyramid
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0;j< i; j++)
    {
      cout<<" ";
    }
    for (int k = 0; k < 5-i; k++)
    {
        if(k==0 || k==5-i-1 ){
          cout<<"* ";
        }
        else{
          cout<<"  ";
        }
    }
    cout<<endl;
    
    
  }
  
  return 0;
}