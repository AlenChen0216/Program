#include <stdio.h>
int main(){
	int n,m,a[20]={0},i,k;
	int c[21]={0};
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
  	scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
 	c[a[i]]=1;
	}
	for(i=1;i<=n;i++){
    	if(c[i]==0){
      	printf("%d ",i);
    	}
	}
}

