#include<stdio.h>
int main(){
	int in[100];
	int i,j,N;
	int tmp=0;
	scanf("%d",&N);
	if(N>100){
		printf("Over.");
		return 0;
	}
	for(i=0;i<N;i++) scanf("%d",&in[i]);
		for(i=0;i<N-1;i++){
		  for(j=i;j<N;j++){
			 if(in[i]<in[j]){
				tmp=in[i];
				in[i]=in[j];
				in[j]=tmp;
			 }
		}
	}
	for(i=0;i<N;i++) printf("%d ",in[i]);	
}
