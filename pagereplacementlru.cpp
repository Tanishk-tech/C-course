#include<iostream>
using namespace std;
void insert(int ent, int n, int &pgf, int a[])
{
    int c=0, i=0;
    for(i=0; i<n; ++i)
    {
        if(ent==a[i])
        {
            ++c;
            break;
        }
    }
    if(c==0)
    {
        ++pgf;
        for(int i=0 ;i<n; ++i)
        {
            if(i==n-1)
            {
                a[i]=ent;
            }
            else
            {
                a[i]=a[i+1];
            }
        }
    }
    else
    {
        for( ; i<n; ++i)
        {
            if(i==n-1)
            {
                a[i]=ent;
            }
            else
            {
                a[i]=a[i+1];
            }
        }
    }
    return;
}
int main()
{
    int n, pgf=0, ent;
    char ch='y';
    cout<<"enter size of frame - ";
    cin>>n;
    int a[n]={0};
    while((ch=='y') || (ch=='Y'))
    {
        cout<<"enter the page no. - ";
        cin>>ent;
        insert(ent, n, pgf, a);
        cout<<"want to enter more?(y/n) - ";
        cin>>ch;
    }
    cout<<endl<<"no. of page faults - "<<pgf;
    return 0;
}
