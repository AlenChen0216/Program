#include <stdio.h>
int gcd(int x, int y) {
    int tmp;
    while (x % y != 0) {
        tmp = y;
        y = x % y;
        x = tmp;
    }
    return y;
}      
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("¤½¦]¼Æ:%d",gcd(a,b));
	return 0;
}
