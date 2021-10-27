#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)
        {
           cout<<++k<<" "; 
        }
           cout<<endl;
    }
}