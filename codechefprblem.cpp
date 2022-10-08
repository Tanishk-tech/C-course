#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int t,n[2],x[2],p;
	cin>>t;

	for(int j=0;j<2;j++)
	{
		scanf("%d %d",&n[j],&x[j]);
	}
	for(int i=1;i<=t;i++)
	{
	    
	         p=x[i]%n[i];
			 //cout<<p<<endl;

	         if(p<n[i] && p!=0)
	         {
	             cout<<"no"<<endl;
	             break;
	         }
	
	         if(p==0)
	         {
	           cout<<"yes"<<endl;
	         }
	}
	return 0;
}
