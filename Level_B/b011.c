#include<stdio.h>
#include<string.h>
int main(){
	char s1[101],s2[101],s3[101],num[8]={0};
	int i,j=0,c=0;
	int x=1;
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	for(i=0;i<strlen(s1);i++){
    	if(s1[i]<58&&s1[i]>47){
        	num[j]=s1[i];
        	num[j]-=48;
        	j++;
    	}
	}
	for(i=j-1;i>=0;i--){
    	c+=(num[i]*x);
    	x=x*10;
	}
	j=0;
	x=1;
    	for(i=0;i<strlen(s2);i++){
    	if(s2[i]<58&&s2[i]>47){
        	num[j]=s2[i];
        	num[j]-=48;
        	j++;
    	}
	}
	for(i=j-1;i>=0;i--){
    	c+=(num[i]*x);
    	x=x*10;
	}
	j=0;
	x=1;
    	for(i=0;i<strlen(s3);i++){
    	if(s3[i]<58&&s3[i]>47){
        	num[j]=s3[i];
        	num[j]-=48;
        	j++;
    	}
	}
	for(i=j-1;i>=0;i--){
    	c+=(num[i]*x);
    	x=x*10;
	}
	printf("%d",c);
}

