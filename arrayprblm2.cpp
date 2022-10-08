//sum of each subarrays of arrays//

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

void sumsubarray(int p[],int n)
{
    int sum=0 ,grand_sum=0;
    for(int i=0 ;i<n;i++)
    {
        sum=0;
        for(int j=i ;j<n;j++)
        {
            sum=sum+p[j];
            grand_sum+= sum;
            cout<<"sum of each subarray is"<<sum<<endl;
        }
    }
        cout<<"sum of all subarrays is"<<grand_sum<<endl;
}
int main()
{
    int a[100];
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    input(a,n);
    display(a,n);
    sumsubarray(a,n);
/*cout<<"sum is: "<<endl<<s;
  */  
}