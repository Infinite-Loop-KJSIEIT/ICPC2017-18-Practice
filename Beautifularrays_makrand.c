#include <stdio.h>

int main(void) {
	// your code goes here
	int T=0;
	scanf("%d",&T);
	while(T--){
	    int n=0,ones=0,zeroes=0,minus_ones=0,other=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++){
	      scanf("%d",&arr[i]);
	      if(arr[i]==0) zeroes++;
	      else if(arr[i]==1) ones++;
	      else if(arr[i]==(-1)) minus_ones++;
	      else other++;
	      
	    }
	   	if(other>1)
			printf("no\n");
		else if(other==1)
		{
			if(minus_ones!=0)
				printf("no\n");
			else
				printf("yes\n");
		}
		else
		{
			if(other==0&&minus_ones>1&&ones==0)
				printf("no\n");
			else                     
				printf("yes\n");
		}	
	    
	}
	
	return 0;
}
