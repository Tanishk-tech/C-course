#include<iostream> //last problem of 4.2 of apna college//
using namespace std;
int main()
{
  int n;
  cout<<"enter n"<<endl;
  cin>>n;
  for(int i=1;i<=3;i++)
  {
      for(int j=1;j<=2*n+i;j++)
      {
          if((i+j)%4==0 || (i==2 && j%4==0))
          {
              cout<<"* ";
          }
          else
          {
              cout<<"  ";
          }
      }
              cout<<endl;
  }
}