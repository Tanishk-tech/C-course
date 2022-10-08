#include<iostream>
using namespace std;
int fact(int num)
{
    int fact=1;
    if(num==0)
    {
        fact=1;
    }
    else
    {
         for(int i=1;i<=num;i++)
         {
            fact=fact*i;
         }
   
    }
    return fact;
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int s=fact(i)/(fact(i-j)*fact(j)) ;
            cout<<s<<" "; 
        }
            cout<<endl;
    }
}
