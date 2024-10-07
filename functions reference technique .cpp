#include <iostream>
using namespace std;

void swap (int&a,int&b){
  int temp=a;
  a=b;
  b=temp;
}
int main(){
  int x,y;
  cout<<"Enter the value of x:"<<endl;
  cin>>x;
  cout<<"Enter the value of y:";
  cin>>y;
  cout<<"\n Before swaping:\n";
  cout<<"x="<<x<<",y="<<y<<endl;
  swap(x,y);
  cout<<"\n After swaping:\n";
  cout<<"x="<<x<<",y="<<y<<endl;
  return 0;
}