#include<iostream>
using namespace std;

int main(){
  // hollow full pyramid
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0;j< 5-i-1; j++)
    {
      cout<<" ";
    }
    for (int k = 0; k < i+1; k++)
    {
      if( k==0 || k==i+1-1){
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