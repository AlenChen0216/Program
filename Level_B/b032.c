#include<stdio.h>
#define max(a,b) (a>b?a:b)
int main(){
	int N,i,j;
	int gra[101];
	int L[101];
	int ans=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
	scanf("%d",&gra[i]);
	L[i]=1;	
	} 
	for(i=1;i<N;i++){
		for(j=0;j<i;j++){
			if(gra[j]<gra[i]){
				L[i]=max(L[i],L[j]+1);
				printf("L  %d %d\n",L[i],i);
			}
		}
		ans=max(ans,L[i]);
	}
	printf("%d",ans);
}
