#include<stdio.h>
int main(void){
	int n,m,a=0,c=0;
	int i,b[11];
   scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",&b[i]);
	 scanf("%d",&m);
	  for(i=1;i<=n;i++){
	  	if(m>b[i]){
	  		a=a+1;
		  }else if(m<b[i]){
		  	c=c+1;
		  }else if(m==b[i]){
		  	continue;
		  }
	  }
	  printf("%d %d",c,a);
}
