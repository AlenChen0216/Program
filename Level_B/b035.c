#include<stdio.h>
#define L 10000
int main(){
	int N,i,j;
	int ti[L],a;
	scanf("%d",&N);
	for(i=0;i<N;i++) scanf("%d",&ti[i]);
	for(i=0;i<N;i++){
		for(j=i;j<N;j++){
		if(ti[i]>ti[j]){
				a=ti[j];
				ti[j]=ti[i];
				ti[i]=a;
		  }	
		}	
	}
	a=0;
	for(i=N-1;i>=0;i--){
		for(j=0;j<i;j++){
			a+=ti[j];
		}
	}
	printf("%lld",a*100);	
}
