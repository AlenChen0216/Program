#include<stdio.h>
int main(){
	int a[100000]={0};
	int n,m,i,j=0,b=0,sw=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m==3){
			scanf("%d",&a[j]);
			j++;
		}else if(m==1){
			a[j-1]=0;
			j--;
		}else if(m==2){
			printf("%d\n",a[j-1]);
		}
	}
}
