#include<iostream>
using namespace std;

void input(int p[],int n)  //for binary search elements are in sorted form//
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

int binarysearch(int p[],int n,int key)
{
    int s=0; //s is starting element//
    int e=n-1; //e is ending element //
    while(p[mid] != key)
    {
        mid=(s+e)/2;
        if(mid>key)
      {
        e=mid-1;
      }
        if(mid<key)
         {
           s=mid+1;
         }
    
    }
    if(p[mid]==key)
    {
        return (mid);
    }

}

main()
{
    int a[100];
    int n,key;
    cout<<"size of array:"<<endl;
    cin>>n;
    input(a,n);
    display(a,n);
    int t=binarysearch(a,n,key);
    cout<<"index of key element is :"<<t;

}