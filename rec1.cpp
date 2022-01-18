#include<iostream>
using namespace std ;
int sum(int n)
{
    int add;
    if(n==1)
    {
        return(1);
    }
    else
    {
         add =n + sum(n-1);
    }
       return(add);
    
}
int main()
{
   int n;
   cout<<"enter number"<<endl;
   cin>>n;
   int s=sum(n);
   cout<<s;
}