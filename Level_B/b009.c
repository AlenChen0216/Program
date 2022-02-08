#include<stdio.h>
#include<string.h>
int main(){
  char std[99],in[99];
  int i,j,b=0,c=0;
  int d[99],v=0;
  scanf("%s",std);
  scanf("%s",in);
  for(i=0;i<strlen(std);i++){
	for(j=i;j<strlen(in);j++){
    	if(std[i]==in[j]){
        	d[i]=j;
        	v++;
        	break;
    	}
	}
  }
	for(i=0;i<strlen(std);i++){
    	if(d[i]==d[i+1]&&v==strlen(std)){
        	c=0;
    	}else if (d[i]!=d[i+1]&&v==strlen(std)){
        	c++;
	}
}
  if(c==strlen(std)){
	printf("YES");
  }else{
	printf("NO");
  }
}

