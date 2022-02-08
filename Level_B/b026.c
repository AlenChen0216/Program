#include<stdio.h>
#include<stdlib.h>
int main(){
	int N,day[101],i;
	int an[101]={0},a=0;
	scanf("%d",&N);
	for(i=0;i<N;i++) scanf("%d",&day[i]);
	an[0]=day[0];
	for(i=0;i<N;i++){
		if(an[i]<0){
			an[i+1]=day[i+1];
		}else an[i+1]=an[i]+day[i+1];
		printf("%d %d\n",an[i],i);
	}
	a=an[0];
	for(i=0;i<N;i++){
		if(a<an[i]){
			a=an[i];
		}
	}
	if(a<0) a=0;
	printf("%d",a);
}
