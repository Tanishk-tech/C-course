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
int linearsearch(int p[],int n, int key)
{
    for(int i=0;i<n;i++)
    {    if(p[i]==key)
     {
        return (i);
     }
    }
    cout<<"if element no present in array then index is 6"<<endl;
    return(6);
}
 int main()
{
    int a[100];
    int num,n,key;
    cout<<"size of array:"<<endl;
    cin>>n;
    input(a,n);
    display(a,n);
    label :
    cout<<"enter key whose index (i) you will find:"<<endl;
    cin>>key;   
    int s=linearsearch(a,n,key);
    cout<<"index is : "<<s<<endl;
    cout<<"enter 0 for exit and 1 for continue to search element "<<endl;
    cin>>num;
    if(num==0)
    goto exit;
    goto label;
    exit :
    cout<<"program ended ";
    return 0;
}
