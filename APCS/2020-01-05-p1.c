#include<stdio.h>
int main(){
	int h;
	int rob[100]={0};
	int hum[100]={0};
	int n,i,j=0;
	scanf("%d",&rob[0]);	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&hum[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",rob[i]);
		if((rob[i]==0&&hum[i]==2)||(rob[i]==2&&hum[i]==5)||(rob[i]==5&&hum[i]==0)){
		j+=1;
		break;
		}else if((rob[i]==0&&hum[i]==5)||(rob[i]==2&&hum[i]==0)||(rob[i]==5&&hum[i]==2)){
			j-=1;
			break;
		}
		if(rob[i-1]==hum[i]){
			if(hum[i]==0) rob[i+1]=5;
			else if(hum[i]==2) rob[i+1]=0;
			else if(hum[i]==5) rob[i+1]=2;
			continue;	
		}
		rob[i+1]=hum[i];		
	}
	printf(": ");
	if(j==0){
		printf("Drew ");
		i--;
	}else if(j==1){
		printf("Won ");
	}else if(j==-1){
		printf("Lost ");
	}
	printf("at round %d",i+1);
}
