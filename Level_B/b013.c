#include<stdio.h>
#include<string.h>
int main(){
	char s1[101],s2[101],s3[101];
	fgets(s1,sizeof(s1),stdin);
	fgets(s2,sizeof(s2),stdin);
	fgets(s3,sizeof(s3),stdin);
	printf("\n");
	puts(s3);
	puts(s1);
	puts(s2);
}

