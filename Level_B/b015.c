#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	char  s1[101];
	char *de=" ";
	char *h="BILL";
	char *n1;
	int a=0,b=0,i;
	int num=0,line=0;
	for(i=0;i<3;i++){
	  gets(s1);	
	  n1=strtok(s1, " ");
	while(n1!=NULL){	
		a++;
		if(!strcmp(n1,h)){
			line=i;
			num=a;
			b+=1;
			break;
		}
		n1=strtok(NULL, " ");
	}
	a=0;
  }
  if(b==0){
  	printf("NO\n");
  }else if(b!=1){
  	printf("Wrong,there's only one Bill.");
  }else printf("%d %d",line+1,num); 
 }
