#include<stdio.h>
int main(){
	int N,i,a[10];
	scanf("%d",&N);
	for(i=0;i<N;i++) scanf("%d",&a[i]);
	for(i=N-1;i>=0;i--) printf("%d ",a[i]);
}
