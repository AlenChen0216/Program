#include <stdio.h>
#include <string.h>
int main(){
	char in[99];
	int i,a=0;
	int sto[99]={0};	
	scanf("%s",in);
	for(i=0;i<strlen(in);i++){
		if(in[i]=='M'){
			sto[i]=1000;
		}else if(in[i]=='D'){
			sto[i]=500;
		}else if(in[i]=='C'){
			sto[i]=100;
		}else if(in[i]=='L'){
			sto[i]=50;
		}else if(in[i]=='X'){
			sto[i]=10;
		}else if(in[i]=='V'){
			sto[i]=5;
		}else if(in[i]=='I'){
			sto[i]=1;
		}
	}
	for(i=0;i<strlen(in);i++){
		if(sto[i]<sto[i+1]){
			a-=sto[i];
		}else{
			a+=sto[i];
		}
	}
	printf("%d",a);		
}
