#include<stdio.h>
int main(){
	int N,i,a=0;
	scanf("%d",&N);	
	long long int s1[N];
	s1[0]=1;
	s1[1]=2;
	for(i=2;i<N;i++){
		s1[i]=s1[i-1]+s1[i-2];
	}
	a=s1[N-1]%N;
	long long int s2[a];
	s2[0]=1;
	s2[1]=2;
	for(i=2;i<a;i++){
		s2[i]=s2[i-1]+s2[i-2];
	}
	printf("%lld %lld",s1[N-1],s2[a-1]);
} 

