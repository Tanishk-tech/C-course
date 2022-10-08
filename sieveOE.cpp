#include<iostream>
using namespace std;

void sieve(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    cout<<"prime number is : "<<endl;
    for(int p=2;p<=n;p++)
    {
        if(prime[p]==0)
        cout<<p<<" ";
    }
}

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    sieve(n);
}