//record breaker//

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int v[20],n,flag=0;
        cin>>n;
        for(int j=0;j<=n-1;j++)
        {
            cin>>v[j];
        }
        for(int j=1;j<=n-1;j++)
        {
            if(v[j]>v[j-1] && (j==n-1 || v[j]>v[j+1]))
            {
                cout<<v[j]<<" "<<endl;
                ++flag;
            }
        }
        cout<<flag<<endl;    //number of record breaking day//
    }
}