#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j>i && j<=(2*n-i))
            {
                 cout<<"  ";
            }
            else
            {
                 cout<<"* ";
            }

        }
                cout<<endl;
    }
    for(int a=0;a<n;a++)
    {
        for(int b=1;b<=2*n;b++)
        {
           if(b>n-a && b<=n+a && a!=0)
           {
               cout<<"  ";
           }
           else
           {
               cout<<"* ";
           }

        }
               cout<<endl;
    }

}