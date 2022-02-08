#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(void){
	char  s1[101],s2[101],s3[101];
	char *de=" ";
	char *n1;
	char *n2;
	char *n3;
	int ans[3]={0};
	int n,i,num=0,tim=0;
	fgets(s1,sizeof(s1),stdin);
	fgets(s2,sizeof(s2),stdin);	
	fgets(s3,sizeof(s3),stdin);	
	n1=strtok(s1, de);	
	while(n1!=NULL){
		ans[0]+=atoi(n1);
		n1=strtok(NULL, de);
	}
	n2=strtok(s2, de);
	while(n2!=NULL){
		ans[1]+=atoi(n2);
		n2=strtok(NULL, de);
	}
	n3=strtok(s3, de);	
	while(n3!=NULL){
		ans[2]+=atoi(n3);
		n3=strtok(NULL, de);
	}	
	for(i=0;i<3;i++)printf("FF%d\n",ans[i]);
	for(i=0;i<=1;i++){
		if(ans[i]<ans[i+1]){
			num=ans[i+1];
			tim=i+1;
		}else if(ans[i]>ans[i+1]){
			num=ans[i];
			tim=i;	
		}
	}
	if(ans[0]>ans[1]&&ans[0]>ans[2]){
			num=ans[0];
			tim=0;
		}
	if(ans[1]==0&&ans[0]>ans[2]){
			num=ans[0];
			tim=0;
		}else if(ans[1]==0&&ans[0]<ans[2]){
			num=ans[2];
			tim=2;
		}
	printf("%d %d",tim+1,num);
}
