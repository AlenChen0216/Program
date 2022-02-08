#include <stdio.h>
#define v 100000000
int c[v];
int main(void){
	int N,i;
	int b=0,g=0,a[21];
	scanf("%d",&N);
	for(i=1;i<=N;i++)scanf("%d",&a[i]);
	for(i=1;i<=N;i++){
			c[a[i]]++;
	}
	for(i=1;i<=N;i++){
		if(c[a[i]]>b){
			b=c[a[i]];
			g=a[i];
		}
	}
	if(b==1){
		b=0;
		g=0;
	}
	printf("%d %d",g,b);
}
