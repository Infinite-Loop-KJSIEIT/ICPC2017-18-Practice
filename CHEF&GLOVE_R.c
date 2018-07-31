#include <stdio.h>
int front(double ,double [],double []);
int back(double ,double [],double []);

int main(void) 
{
    int T,i,f,b;
    double N,L[500],G[500];
    scanf("%d",&T);
    while(T-->0)
    {
        scanf("%lf",&N);
        for(i=0;i<N;i++)
        scanf("%lf",&L[i]);
        for(i=0;i<N;i++)
        scanf("%lf",&G[i]);
        
        f=front(N,L,G);
        b=back(N,L,G);
        
        if(f==1&&b==1)
            printf("both\n");
        else if(f==1&&b==0)
            printf("front\n");
        else if(f==0&&b==1)
            printf("back\n");
        else
            printf("none\n");
    }
    return 0;
}

int front(double n,double a[],double b[])
{
    int i,r=1;
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
{        
r=0;
            break;
        }
    }
    return r;
}
int back(double n,double a[],double b[])
{
    int i,j,r=1;
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(a[j]>b[i])
        r=0;
        break;
    }
    return r;
}
