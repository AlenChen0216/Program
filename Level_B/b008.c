#include<stdio.h>
#include<string.h>
int main(){
	char s[99],a;
	int c;
	scanf("%s",s);
	a=strrev(s);
	if(a==s){
		printf("YES");
	}else printf("NO");
}
