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
int insertion(int p[],int n,int index,int value)
{
    if(n>100)
    {
        cout<<"overflow";
        return (-1);
    }
    p[n]=p[index];
    p[index]=value;
    return (1);
}
main()
{
    int a[100];
    int n,index,value;
    cout<<"size of array:"<<endl;
    cin>>n;
    input(a,n);
    display(a,n);
    cout<<"enter index where you insert element and its value"<<endl;
    cin>>index>>value;
   int d= insertion(a,n,index,value);
   cout<<"return value is"<<d<<endl;
    n=n+1;
    display(a,n);
}