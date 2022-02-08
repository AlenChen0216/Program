#include<stdio.h>
int c;
int F(int);
int main(){
	int a;
	scanf("%d",&a);
	printf("%d ",F(a));
	if(a==0){
		printf("0");
	}else printf("%d",c);

} 
int F(int a){
	c++;
	if(a<=1){
		return a;
	}else{
		return F(a-1)+F(a-2);
	}
}
