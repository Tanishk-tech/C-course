#include<iostream>
using namespace std;
int mul(int x,int y)
{
  int multi;
  if(y==0)
  {
    return(1);
  }
  else
  {
     multi=x*mul(x,y-1);    
  }
     return(multi);
}
int main()
{
    int n,p;
    cout<<"enter number and times multiply"<<endl;
    cin>>n>>p;
    int s=mul(n,p);
    cout<<s;
}