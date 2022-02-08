#include<stdio.h>
#include<string.h>
int main(){
  char s[99];
  int i,j=0,c=0,b=0;
  scanf("%s",s);
  b=strlen(s);
  for(i=0;i<b/2;i++){
  	if(s[i]==s[(b-1)-j]){
  		j++;
  		c++;
	  }  
  }
	if(c==(b/2)){
	printf("YES"); 
	}else printf("NO");
}
