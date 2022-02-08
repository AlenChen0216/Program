#include<stdio.h>
#include<string.h>
int main(){
	char s[99];
	int i;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++){
    	s[i]-=2;
    	if(s[i]<'A')s[i]+=26;
	}
	printf("%s",s);
}

