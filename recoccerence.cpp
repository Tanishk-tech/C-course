// find first and last occurence of element in array (we find index)//

#include<iostream>
using namespace std;

void input(int a[],int n)
{
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void occurence(int a[],int n,int p)
{
    static int current;
    static int i=0,flag=0,tag=0,lag=0;
    if(i==n)
    return;
    if(a[i]==p)
    {
        if(flag==0)
        {
           cout<<"first occurence of element is : "<<i<<endl;
           current=i;
           ++flag;
        }
        else
        {
           current=i;
        }
    }
    ++lag;
    ++i;
    occurence(a,n,p);
    if(tag==0 && lag!=i-1)
    {
        cout<<"last occurence of element is : "<<current<<endl;
        ++tag;
    }
    if(flag==0 && tag==0)
    {
        cout<<"element not present in array"<<endl;
    }
    
}

int main()
{
    int n,a[20],p,count;
    cout<<"enter number of elements in array"<<endl;
    cin>>n;
    input(a,n);
    label:
    cout<<"enter element p of the array"<<endl;
    cin>>p; 
    occurence(a,n,p);           //occurence not run in goto loop//
    cout<<"for continue program press..1 and exit press..0"<<endl;
    cin>>count;
    if(count==1)
    goto label;
    if(count == 0)
    goto exit;
    exit :
    cout<<"program ended...";
    return 0 ;
}