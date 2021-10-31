#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
           if(j<=n-i)
           {
               cout<<"  ";
           }
           else
           {
               cout<<k<<"   ";
               k++;
           }
        }
               cout<<endl;
               k=1;
    }
}