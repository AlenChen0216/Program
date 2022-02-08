#include <stdio.h>
void hanoi(int n,int A,int B,int C){
	    if(n == 1) {
        printf("Ring %d from %d to %d\n",n, A, C);
    }
    else {
        hanoi(n-1, A, C, B);
        printf("Ring %d from %d to %d\n",n,A,C);
        hanoi(n-1, B, A, C);
    }
}
int main (){
	int N;
	int a=1,b=2,c=3;
	scanf("%d",&N);
	hanoi(N,a,b,c);
}
