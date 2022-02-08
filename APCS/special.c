#include<stdio.h>
struct data{
	int w;
	int f;
};
struct data sum[100002];
int main(){
	int n;
	int i,j;
	int tem=0,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sum[i].w);
	}
	for(i=0;i<n;i++){
		scanf("%d",&sum[i].f);
	}
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(sum[i].f<sum[j].f){
				sum[100001]=sum[i];
				sum[i]=sum[j];
				sum[j]=sum[100001];
			}else if(sum[i].f==sum[j].f){
				if(sum[i].w>sum[j].w){
					sum[100001]=sum[i];
					sum[i]=sum[j];
					sum[j]=sum[100001];
				}
			}
		}
		
	}
	for(i=0;i<n-1;i++){
		tem+=sum[i].w;
		ans+=tem *sum[i+1].f;
	}
	printf("%d",ans);
}
