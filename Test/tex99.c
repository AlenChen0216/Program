#include<stdio.h>
#include<string.h>
#define P 100
int Input(char s[]){
	char n[P];
	int i,l;
	for(i=0;i<P;i++) s[i]=0;
	if(scanf("%s",n)<1) return -1;
	l=strlen(n);
	for(i=0;i<l;i++){
		s[i]=n[l-i-1]-'0';
	}
		return 0;
}
int Add(char s1[],char s2[],char sum[]){
	int i;
	for(i=0;i<P;i++) sum[i]=s1[i]+s2[i];
	for(i=0;i<P-1;i++){
		if(sum[i]>=10){
			sum[i+1]+=sum[i]/10;
			sum[i]=sum[i]%10;
		}
	}
}
void Print(char sum[]){
	int i;
	for(i=P-1;i>0;i--) if(sum[i]!=0) break;
	for(;i>=0;i--) printf("%d",sum[i]);
	printf("\n");
}
int main(){
	char a[P],b[P],c[P];
	Input(a);
	Input(b);
	Add(a,b,c);
	Print(c);
	return 0;
}
