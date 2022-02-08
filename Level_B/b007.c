#include <stdio.h>
#include <string.h>
int main(){
	char a[99],b=0,i;
	scanf("%s",a);
	b=strlen(a)-1;
	 for(i=b;i>=0;i--)printf("%c",a[i]);
	return 0;
} 
