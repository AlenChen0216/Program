#include<stdio.h>
#define L 1000
int main(){
	int N,i,j,w[L+1]={0};
	int v[]={2,5,10,20,25};
	scanf("%d",&N);
	w[0]=1;
	for(i=0;i<5;i++){
		for(j=v[i];j<=N;j++){
			w[j]+=w[j-v[i]];
		}
	}
	printf("%d",w[N]);
}
	
