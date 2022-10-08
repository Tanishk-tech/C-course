#include<iostream>
using namespace std;
int main()
{   int n,k;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {   if(j==1)
            {
               if(i%2!=0)
              {
                 k=1;  
              }
               else
              {
                 k=0;
              }
              
            }
                 cout<<k<<" ";
            if(j%2!=0 && k==0)
            {
                ++k;
            }
            else
            {
                --k;
            }
        }
                cout<<endl;

    }
}