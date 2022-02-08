#include<stdio.h>
#include<string.h>
int main(){
	int N,i,j;
	char f[100];
	scanf("%d",&N);
	char nam[N][100];	
	for(i=0;i<N;i++){
		scanf("%s",nam[i]);		
	}
	for(i=0;i<N-1;i++){
		for(j=i;j<N;j++){
			if(strcmp(nam[i],nam[j])>0){
				strcpy(f,nam[j]);
				strcpy(nam[j],nam[i]);
				strcpy(nam[i],f);
			}
		}
	}
	for(i=0;i<N;i++) printf("%s\n",nam[i]);
}
