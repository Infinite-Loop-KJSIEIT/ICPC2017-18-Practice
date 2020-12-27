#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 2000000

int main(void) {
	int T=0,n=0;
	scanf("%d",&T);
	
	while(T-- > 0){
	    char strip[MAX] = "";
	    char dataset[]={'c','h','e','f'};
	    bool lovely = false;
	    int counter=0;
	    scanf("%s",strip);
	    n=strlen(strip);
	    for(int i=0;i<n;i++){
	        
	        for(int j=0;j<4;j++){
	           if(strip[i]==dataset[j]){
	               dataset[j]='A';
	               for(int j=0;j<4;j++){
	                   if(strip[i+1]==dataset[j]){
	                       dataset[j]='A';
	                       for(int j=0;j<4;j++){
	                         if(strip[i+2]==dataset[j]){
	                         dataset[j]='A';
	                         for(int j=0;j<4;j++){
	                           if(strip[i+3]==dataset[j]){
	                           dataset[j]='A';
	                           lovely = true;
	                           counter++;
	                           break;
	                           }
	                         }
	                       }    
	                      }
	                     }
	               }
	           }
	           
	  
    }
    dataset[0]='c';
    dataset[1]='h';
    dataset[2]='e';
    dataset[3]='f';
    
    
   }
   if(lovely)
    printf("lovely %d \n", counter);
   else
    printf("normal\n");
 }
 return 0;
    
}
