//2-D array with pointer //

#include<stdio.h>
int main()
{
    int a[3][4];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=3;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=3;j++)
        {
            printf("%d %d %d %d\n",&a[i][j],*(a[i] + j),*(*(a+i)+j),a[i]);
        }
    }

}