#include<stdio.h>
#define Max(a,b) (a>b?a:b)
int c[10000];
int h[10000];
int Pre(int i,int tree[]){
	int fro=c[i]-h[i];
	int j=i;
	int tr=0;
	while(j!=-1){
    	if(c[j]<=fro) break;
    	j--;
	}
	j++;
	if(j==i){
   	return 1;
	}
	for(;j<=i;j++){
    	if(tree[j]==0){
      	tr=1;
      	break;
    	}
	}
	if(tr==0||fro==c[j]){
    	return 1;
	}else if(tr==1) return 0;
}
int Nex(int i,int tree[],int to){
	int bac=c[i]+h[i];
	int j=i;
	int tr=0;
	while(j!=to){
    	if(c[j]>=bac) break;
    	j++;
	}
	j--;
	if(j==i){
   	return 1;
	}
	for(;j>i;j--){
    	if(tree[j]==0){
      	tr=1;
      	break;
    	}
	}
	if(tr==0){
    	return 1;
	}else if(tr==1) return 0;
}
int main(){
	int n,l,i;
	while(scanf("%d %d",&n,&l)){
		int cnt=0,max=0;
	int cur[1000]={0};
	for(i=0;i<n;i++){
    	scanf("%d",&c[i]);
	}
	for(i=0;i<n;i++){
    	scanf("%d",&h[i]);
	}
	for(i=n-1;i>=0;i--){
    	if(Pre(i,cur)&&c[i]-h[i]>=0){
        	cnt++;
        	max=Max(max,h[i]);
        	cur[i]=1;
    	}else if(Nex(i,cur,n)&&c[i]+h[i]<=l){
        	cnt++;
        	max=max=Max(max,h[i]);
        	cur[i]=1;
    	}
	}
	printf("%d %d\n\n",cnt,max);	
	}
}
