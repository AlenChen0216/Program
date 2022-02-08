
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){ 
	int N,a,b,c;
	srand(time(NULL));
	scanf("%d",&N);
	a=(rand()%100)+1;
	b=(rand()%90)+1;
	c=(rand()%88)+1; 
	if(N==a){
		printf("¤j¦N");
	}else if(N==b){
		printf("¤¤¦N");
	}else if(N==c){
		printf("¥½¦N");
	}else{
		printf("¥û");
	}
}
