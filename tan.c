#include<stdio.h>
int main()
{
  int i,j,blanks=0,p,a=1;
  char ch;

  for ( i = 0; i < 7; i++)
  {
     p=2*i-1;
     for (j= 65; j < (72-a); )
    {
       printf("%c ",j);
       if(j<72-a)
       j++;
       else
       if(i>0)
      { while(blanks<p)
       {
         printf("");
         blanks++;
       }
      }
       j--;
       if(j<65)
      {
          a++;
           break;
      }
    }
    
      
  }
  










}



