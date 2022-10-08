/*number occurs more than once and whose index of first occurrence is small and print index+1 
and time coplexity is not o(n^2)*/

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void input(int p[],int n)
{
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
}

void least(int p[], int n)
{
    const int  m=1e6+2 ;
    int idx[m];
    for(int i=0 ; i<=m-1;i++)
    {
        idx[m]= -1;
    }
    int mididx= INT_MAX;
    for(int i=0 ;i<=n-1;i++)
    {
        if(idx[p[i]] != -1)
        {
            mididx=min(mididx,idx[p[i]]) ;
        }
        else
        {
            idx[p[i]]=i;
        }
    }
    if(mididx==INT_MAX)
    {
        cout <<"-1";
    }
    else
    {
         cout <<"ans :"<<mididx + 1 ;
    }
   
}

int main()
{
   int n,a[20];
   cout<<"array size"<<endl;
   cin>>n;
   input(a,n);
   least(a,n);
   return 0;
}