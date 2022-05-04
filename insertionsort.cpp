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
void insertionsort(int p[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current = p[i];
        int j=i-1;
        while(p[j]> current && j>=0)
        {
            p[j+1]= p[j];
            j--;
        }
         p[j+1]=current;
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
    insertionsort(arr,n);
    cout<<"sorted array is :"<<endl;
    display(arr,n);
    
}