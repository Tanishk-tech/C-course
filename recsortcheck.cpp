//checking array is sorted or not by recursion (increasing strictly)//

#include<iostream>
using namespace std;

void input(int p[],int n)
{
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        cout<<" ";
    }
    cout<<endl;
}

bool check(int p[], int n )
{
   if(n==1)
   return true;
   bool restarray = check(p+1,n-1);
   for(int i=0 ;i<n;i++)
   {
       cout<<p[i]<<" ";
   }
   cout<<endl;
   return(p[0]<p[1] && restarray);
}

int main()
{
    int n ,a[10];
    cout<<"enter number of element"<<endl;
    cin>>n;
    input(a,n);
    bool s=check(a,n);
    cout<<"array is sorted or not 1 show true and 0 show false : "<<s;


}