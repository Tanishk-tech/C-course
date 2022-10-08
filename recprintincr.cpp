#include<iostream>
using namespace std;

void incr(int n)
{
  static int i=1;
  if(n==0)
  return;
  cout<<i<<endl;   
  ++i;
  incr(n-1); 
  /*cout<<n<<endl; */    //if we remove static int i then we use this//
}

int main()
{
    int n;
    cin>>n;
    incr(n);
}