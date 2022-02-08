#include<stdio.h>
#include<string.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
int main(){
	int H,W;
	scanf("%d%d",&H,&W);
	int map[1000][100];
	int i,j;
	int sto[100][100]={0};
	int ans=0;
	for(i=0;i<W;i++) map[0][i]=0;map[i][0]=0;
	for(i=1;i<=H;i++){
		for(j=1;j<=W;j++){
			scanf("%d",&map[i][j]);
			if(map[i][j]==0){
				map[i][j]=1;
			}else if(map[i][j]==1){
				map[i][j]=0;
			}
			sto[i][j]=0;
		}
	}
	for(i=1;i<=H;i++){
		for(j=1;j<=W;j++){
			if(map[i][j]!=0){
				map[i][j]=min(min(map[i][j-1],map[i-1][j]),map[i-1][j-1])+1;
				sto[i][j]=map[i][j];
			}
		}
	}
	for(i=1;i<=H;i++){
		for(j=1;j<=W;j++){
		ans=max(ans,sto[i][j]);	
		}
	}
	printf("%d",ans*ans);
}
