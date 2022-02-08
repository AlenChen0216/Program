#include<stdio.h>
#define Max(a,b) (a>b?a:b);
int main(){
	int N,lim;
	int i,j;
	int L[100],S[500];
	scanf("%d%d",&N,&lim);
	int k[N+1][lim+1];
	for(i=0;i<=N;i++){
		for(j=0;j<=lim;j++){
			k[i][j]=0;
		}
	} 
	for(i=0;i<N;i++){
		scanf("%d%d",&L[i],&S[i]);
	}
	for(i=0;i<N;i++){
		for(j=0;j<=lim;j++){
			if(j-L[i]<0){
				k[i+1][j]=k[i][j];
			}else{
				k[i+1][j]=Max(k[i][j],k[i][j-L[i]]+S[i]);
			}
		}
	}
	printf("%d",k[N][lim]);
}
