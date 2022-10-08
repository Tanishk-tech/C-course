//longest arithmetic subarray apna college vedio 8.4//

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       int a[20],n,d[20],maxi=0;
       cin>>n;
       for(int j=0;j<=n-1;j++)
       {
           cin>>a[j];
       }
       int flag=0;
       for(int p=0;p<=n-1;p++)
       {
          d[p]=a[p+1]-a[p];
          if(d[p]==d[p-1] || p==0)
          {
              ++flag;
              maxi=max(maxi,flag);
          }
          else
          {
              flag=1;
          }
       }
       cout<<(maxi+1)<<endl;   //longest subarray number//
    }
    
    

}