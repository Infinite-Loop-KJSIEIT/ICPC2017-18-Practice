#include <stdio.h>

int main(void) {
	// your code goes here
	int T,B,a,n,block;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&B);
	    if(B%2==1)
	    {
	        B=B-1;
	    }
	    a=(B*B)/2;
	    n=B/2;
	    a=a-n*2;
	    block=a/4;
	    printf("%d\n",block);
	}
	return 0;
}

