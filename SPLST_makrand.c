#include <stdio.h>

int main(void) {
	// your code goes here
	int T=0;
	scanf("%d",&T);
	while(T-- > 0){
	   unsigned int a=0,b=0,c=0,x=0,y=0,l=0;
	       scanf("%u%u%u%u%u",&a,&b,&c,&x,&y);
	    if((a+b+c)==(x+y)){
	        if(x<y)
	            l=x;
	        else
	           l=y; 
	        if(l<a&&l<b&&l<c){
	               printf("NO\n");
	            }
	        else{
	            printf("YES\n");
	            
	            }    
	            
	           
	        }
	   else{
	              printf("NO\n");
	       }
	    }
	    
	
	return 0;
}
