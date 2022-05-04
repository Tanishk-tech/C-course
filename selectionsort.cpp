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
void selectionsort(int p[],int n)
{
    for(int i=0;i<=n-2;i++)  //here if n=5 then n-2=3 i.e i=0,1,2,3 show indexes which compared to remaining array//
    {
        for(int j=i+1;j<=n-1;j++)  //here if n=5 then n-1=4 i.e j=0,1,2,3,4//
        {
            if(p[i]>p[j])
            {
                int temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
            }
        }
    }
}
int main()
{
    int arr[100];
    int n;
    cout<<"size of array is :"<<endl;
    cin>>n;
    input(arr,n);
    display(arr,n);
    selectionsort(arr,n);
    cout<<"sorted array is :"<<endl;
    display(arr,n);
}