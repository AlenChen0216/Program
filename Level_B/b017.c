#include<stdio.h>
#include<string.h>
#define L 500
int Input(char s[]){
	char n[L];
	int i;
	for(i=0;i<L;i++) s[i]=0;
	if(scanf("%s",n)<1) return -1;
	for(i=0;i<strlen(n);i++){
		s[i]=n[strlen(n)-i-1]-'0';
	}
}
int Mutipy(char s1[],char s2[],char end[]){
	int n[L]={0};
	int i,j,k=0;
	for(i=0;i<L;i++) end[i]=0;
	for(i=0;i<L;i++){
		for(j=0;j<L;j++){
			n[k]+=(s1[i]*s2[j]);
			k++;
			if(n[i]>=10){
			n[i+1]+=n[i]/10;
			n[i]=n[i]%10;			
		}

		}		
		k=i+1;
	}
	for(i=0;i<L;i++) end[i]=n[i];
	return 0;
}
void Print(char s[]){
	int i;
	for(i=L-1;i>0;i--) if(s[i]!=0) break;
	for(;i>=0;i--)printf("%d",s[i]);
	printf("\n");
}
int main(){
	int i;
	char a[L],b[L],c[L];
	Input(a);
	Input(b);
	Mutipy(a,b,c);	
	Print(c);
}
