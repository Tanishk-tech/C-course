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
void display(int p[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
int deletion(int p[],int n,int index)
{
    p[index]=p[n-1];
    return (1);
}
main()
{
    int a[100];
    int n,index;
    cout<<"size of array:"<<endl;
    cin>>n;
    input(a,n);
    display(a,n);
    cout<<"enter index where you delete element "<<endl;
    cin>>index;
    deletion(a,n,index);
    n=n-1;
    display(a,n);
}