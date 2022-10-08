//number occurs more than once and whose index of first occurrence is small//

#include<iostream>
using namespace std;

void input(int p[],int n)
{
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
}

int least(int p[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(p[i]==p[j])
            {
                return i;
            }
        }
    }
}

int main()
{
   int n,a[20];
   cout<<"array size"<<endl;
   cin>>n;
   input(a,n);
   int s=least(a,n);
   cout<<"element reoccurs with least first occurrence index is : "<<s<<endl;
   

}