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
    wt[0]=0;           // wt of p1 = 0;  wt of p2 = bt of p1;   wt of p3 = bt of p1+p2; //
    for(int i=1;i<n;i++)
    {
        int sum=0;
        for(int j=1;j<=i;j++)
        {
            sum += bt[i-j];
        }
        wt[i]=sum;   
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