#include<stdio.h>
int main(){
	int X,Y;
	int i,j;
	scanf("%d %d",&X,&Y);
	long long int a[X+1][Y+1];
	for(i=0;i<=X;i++){
		for(j=0;j<=Y;j++){
		 a[i][j]=1;	
		} 	
	}
	for(i=1;i<=X;i++){
		for(j=1;j<=Y;j++){
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	printf("%lld",a[X][Y]);
}
