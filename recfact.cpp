#include<iostream>
using namespace std;
int fact(int x)
{
    int factorial;
    if(x==1)
    {
        return(1);
    }
    else
    {
         factorial=x*fact(x-1);
    }
    return(factorial);

}
int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int f=fact(n);
    cout<<f;
}