#include <stdio.h>

int main(){

   int a[11],d;
   int b=0,c=0;
   int i,j;

   scanf("%d",&d);

   for(i=1;i<=d;i++)scanf("%d",&a[i]);
   if(d==1){
   printf("%d %d",1,a[1]);
   return 0;
   }
	for(i=1;i<=d;i++){

		for(j=1;j<=d;j++){

			if(a[i]>a[j]){

				if(b<a[i]){

				b=a[i];

				c=i;

				}

			}else if(a[j]>a[i]){

				if(b<a[j]){	

				b=a[j];

				c=j;

				}

			}

		}

	}

    printf("%d %d",c,b);

  return 0;

} 
