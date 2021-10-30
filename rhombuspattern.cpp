#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int space=n-i;
        for(int j=1;j<=n;j++)
        {
            if(j==1)
           {
              for(int m=1;m<=space;m++)
              {
                 cout<<" ";
              }   
           }
                cout<<"* ";
        }
                 cout<<endl;
    }
}