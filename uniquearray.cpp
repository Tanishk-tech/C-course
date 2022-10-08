#include<iostream>
using namespace std;

void input(int p[],int n)
{
   cout<<"enter element"<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cin>>p[i];
    }
}

void output(int *p,int n)
{
    cout<<"array output may not contain unique value"<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
}

int deletion(int p[],int n,int index)
{
    for(int i=index;i<=n-1;i++)
    {
        p[i]=p[i+1];
    }
    return (1);
}


int distinct(int *p,int n)
{
    int m=n;
    for(int i=0;i<=n-1;i++)
    {
       for(int j=i+1;j<=n-1;j++)
       {
           if(*(p+i)==*(p+j))
           {
              deletion(p,m,j);
              m=m-1;  //i=o,j=4,m=1,d=4
           }
       }
    }
    cout<<"value of"<<m<<endl;
    n=m;
    return(n);
}

int main()
{
    int a[100];
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    input(a,n);
    output(a,n);
    n=distinct(a,n);
    cout<<"distinct array output :"<<endl;
    output(a,n);
}