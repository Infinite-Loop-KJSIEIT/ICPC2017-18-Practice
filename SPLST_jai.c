#include <stdio.h>

int main()
{
    int a,b,c,x,y,T,min;
    scanf("%d",&T);
    while(T-->0)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
        if((a+b+c)!=(x+y))
            printf("\nNO");
        else
        {
            min=(a<b)?((a<c)?a:c):((b<c)?b:c);
            if(x<min||y<min)
                printf("\nNO");
            else
                printf("\nYES");
        }
    }
    return 0;
}
