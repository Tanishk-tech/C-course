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

 void max(int p[], int n)
 {
     int big,small,range,flag=0;
     if(flag==0)
     {
         big=small=p[0];
     }
     for(int i=1;i<=n-1;i++)
     {
         if(small>p[i])
         {
             small=p[i];
         }
         if(big<p[i])
         {
             big=p[i];
         }
     }
     if(small>=0)
     {
       range=big-small;   
     }
     else
     {
         range=big+small;
     }
     
     cout<<"big small range of array is\n"<<big<<" "<<small<<" "<<range<<" ";
 }

int main()
{
    int a[100];
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    input(a,n);
    display(a,n);
    max(a,n);
}