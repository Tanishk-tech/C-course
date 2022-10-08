#include<iostream>
using namespace std;

void input(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
}

void revarray(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i];
    }
}

 int main()
 {
     int t,a[10];
     cin>>t;
     for(int i=1;i<=t;i++)
     {
         int n;
         cin>>n;
         input(a,n);
         revarray(a,n);
     }
     
 }