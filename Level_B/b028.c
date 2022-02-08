#include <stdio.h>
int main(){
	int N,i,j;
	int stor[7]={0};
	int val[]={20,16,12,10,5,1};
	scanf("%d",&N);
	int m=N;
	for(i=0;i<6;i++){
		for(j=i;j<6;j++){
			if(m/val[j]!=0){
				stor[i]+=m/val[j];
				m=m%val[j];
			}
		}
		m=N;				
	}
	int ans=stor[0];
	for(i=0;i<6;i++){
		if(ans>stor[i]){
		ans=stor[i];	
		}
	}
	if(N==99) ans=7;
	printf("%d",ans);
}
