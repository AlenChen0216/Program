#include <stdio.h>

int main(){


 int a,b,c,d;
 int max=0;
 scanf("%d",&a);
 scanf("%d",&b);
 printf("�A��J���Ʀr:%d,%d\n",a,b); 
 if(a>b){
 	for(int i=1;i<a;i++){
 		if(a%i==0){
		 c=i;
		 if(b%i==0)d=i;
		 if(c==d)max=i;
		 }		
	 }
 }else if(b>a){
 	 	for(int i=1;i<b;i++){
 		if(b%i==0){
		 d=i;
		 if(a%i==0)c=i;
		 if(d==c)max=i;
		 }		
	 }
 }else if(b==a){
 	max=a;
 }
 printf("%d�M%d�����]��=%d",a,b,max);
 return 0;
}
