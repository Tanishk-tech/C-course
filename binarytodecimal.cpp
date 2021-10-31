#include<iostream>
using namespace std;
int binarytodecimal(int num)
{
    int x=1;
    int sum=0;
    for(;num!=0;)
    {
      int y=num%10;
      sum=sum+x*y;
      x=x*2;
      num=num/10;
    }
      return sum;
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int s=binarytodecimal(n);
    cout<<s;
}