//print nth fabonnaci number //


#include<iostream>
using namespace std;
int fab(int n)
{
    int fabonacci;
    if(n==0 || n==1)     //base condition of recursion//
    {
        return (n);
    }
      fabonacci =fab(n-1)+fab(n-2);
      return (fabonacci);
}
int main()
{
    int n;
    cout<<"Enter the term"<<endl;
    cin>>n;
    cout<<fab(n-1)<<endl;
}