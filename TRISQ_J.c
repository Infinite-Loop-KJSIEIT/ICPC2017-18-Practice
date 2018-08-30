#include<stdio.h>
int main()
{
 int n,i,j=2,c=0,r=0,t;
    scanf("%d",&t);
    while(t>0)
    {
     scanf("%d",&n);
     while(j<=n)
     {
      i=n-j;
      r=i/2;
      j+=2;
      c=c+r;
     }
     printf("\n%d",c);
     t--;
     j=2;
     c=0;
    }
 return(0);
}
