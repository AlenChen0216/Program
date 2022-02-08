#include<stdio.h>
#include<string.h>
int main(){

    char s[99],a[99];
	int i,j=0,g=0;
	scanf("%s",s);
	for(i=strlen(s)-1;i>=0;i--){
		a[i]=s[j];
		j++;
	}	
	if(strcmp(a,s)==0){
		printf("YES\n");
  }else printf("NO\n");	
}
