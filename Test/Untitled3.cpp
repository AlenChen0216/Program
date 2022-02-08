#include <stdio.h>
int main(){
   int b[11]={},n=0;
   int i;
      scanf("%d",&n);
      for(i=1;i<=n;i++){
      scanf("%d",&b[i]);	
	  }
    for(i=n;i>=1;i--){
    printf("%d ",&b[i]);	
	}
   return 0;	
}
