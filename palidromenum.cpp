#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        int a=i;
        for(int j=1;j<=n+i-1;j++)
        {
            if(j<=n-i)
            {
                cout<<"  ";
            }
            else if(j<=n)
            {
                cout<<a<<" ";
                a--;
            }
            else
            {
               if(j==n+1)
               {
                   a=1;
               }
                   a++;
                   cout<<a<<" ";
            }
        }
                   cout<<endl;
    }
}