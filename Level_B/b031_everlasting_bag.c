#include<stdio.h>
#define Max(a,b) (a>b?a:b);
int main(){
	int N,lim;
	int i,j;
	int L[100],S[500];
	scanf("%d%d",&N,&lim);
	int k[10001]={0};
	for(i=0;i<N;i++){
		scanf("%d%d",&L[i],&S[i]);
	}
	for(i=0;i<N;i++){
		for(j=L[i];j<=lim;j++){
			k[j]=Max(k[j],k[j-L[i]]+S[i]);
			printf("KKK %d %d\n",k[j],j);
		}
	}
	printf("%d",k[lim]);
}
