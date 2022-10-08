//pointers of an array//

#include<stdio.h>

int main()
{
    int *p[4];
    int i=1,j=2,k=3,l=4;
    p[0]=&i;
    p[1]=&j;
    p[2]=&k;                    //p=base address of p[m] array ,p+m=address of m^th index of p[m] array//
                                  
    p[3]=&l;
    for(int m=0;m<=3;m++)
    {
        printf("%u %d %d %d %d %d %d\n",p,p+m,*(p+m),&i,*(p[m]),*(*(p+m)),p[m]);
    }

    
}