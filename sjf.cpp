#include<iostream>
using namespace std;

void input (int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void wat(int wt[],int bt[] , int n)
{
    int flag=0;
   for(int i=0;i<n;i++)
   {
        int pos=i;
       for(int j=pos+1;j<n;j++)
       {
            if(bt[i]>bt[pos])
            {
               pos=j;
            }
         int   temp=bt[pos];
            bt[pos]=bt[i];
            bt[i]=bt[pos];

             temp=p[i];
             p[i]=p[pos];
            p[pos]=temp;


       }
   }
}

void tatt (int tat[],int bt[],int wt[],int n)
{
    for(int i=0; i<n ;i++)                    //tat of p1 = wt of p1 + bt of p1//
    {
        tat[i]=bt[i] + wt[i];
    }
}

float av(int a[],int n)
{
    float avg=0.0;
    for(int i=0;i<n;i++)
    {
         avg = avg + a[i];
    }
    avg=avg/n;
    return avg ;
}
  

int main()
{
    int n , bt[10],tat[10],wt[10];   // bt =burst time , tat= turn around time , wt= waiting time //
    float avwt,avtat;               // avwt= average wt ,avtat= average tat//
    cout<<"Enter nuumber of processes"<<endl;
    cin>>n;
    cout<<"enter burst time of process : "<<endl;
    input(bt,n);
    wat(wt,bt,n);
    tatt(tat,bt,wt,n);
    avwt =  av(wt,n);
    avtat =  av(tat,n);
    cout<<"process_id|"<<"burst time|"<<"waiting time|"<<"turn around time|"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"   p["<<i<<"]  |"<< bt[i] <<" |"<<wt[i]<<"  |"<<tat[i]<<"    |"<<endl;
    }
    cout<<"average turn around time = "<<avtat<<endl;
    cout<<"average waiting time = "<<avwt<<endl;

}