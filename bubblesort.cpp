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
void bubblesort(int p[],int n)
{
    for(int j=1;j<=n-1;j++)
    {
         for(int i=0;i<n-j;i++)
         {
             if(p[i+1]<p[i])
             {
                int temp=p[i];
                    p[i]=p[i+1];
                    p[i+1]=temp;
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
    bubblesort(arr,n);
    cout<<"sorted array is :"<<endl;
    display(arr,n);
}