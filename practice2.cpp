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
    
    input(p,n);
    display(p,n);             //infinite recursion// 
}

int main()
{
    int a[100],n;
    cout<<"size of array:"<<endl;
    cin>>n;
    input(a,n);
    display(a,n);
   
}