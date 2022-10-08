//checking array is sorted or not (increasing strictly)//

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

bool check(int p[], int n )
{
    for(int i=0;i<n;i++)
    {
        if(p[i]>p[i+1])
        {
           return false;
        }
    }
    return true;
}

int main()
{
    int n ,a[10];
    cout<<"enter number of element"<<endl;
    cin>>n;
    input(a,n);
    bool s=check(a,n);
    cout<<"array is sorted or not 1 show true and 0 show false : "<<s;


}