#include<stdio.h>
int main(void){
	int N,i,k,j;
	int a=0,list[100]={0},tmp1=0,tmp2=0,b[100]={0};
	int c=0,d=0;
	scanf("%d",&N);
	int gra[N][6],tmp3[N][5];
	for(i=0;i<N;i++){
		b[i]=i;
		for(j=0;j<6;j++){
		 scanf("%d",&gra[i][j]);
		 list[i]+=gra[i][j];			 	 	
		}
		list[i]-=(i+1);		
	}
	for(i=0;i<N;i++){
	   for(j=i;j<N;j++){
		if(list[j]>list[i]){
			tmp2=list[i];
			list[i]=list[j];
			list[j]=tmp2;

			tmp1=b[i];
			b[i]=b[j];
			b[j]=tmp1;
			
			for(k=1;k<5;k++){
				tmp3[i][k]=gra[i][k];
				gra[i][k]=gra[j][k];
				gra[j][k]=tmp3[i][k];
			}
			}else if(list[j]==list[i]&&gra[j][3]>gra[i][3]){
			tmp2=list[j];
			list[j]=list[i];
			list[i]=tmp2;

			tmp1=b[j];
			b[j]=b[i];
			b[i]=tmp1;
		
				for(k=1;k<5;k++){
				tmp3[i][k]=gra[i][k];
				gra[i][k]=gra[j][k];
				gra[j][k]=tmp3[i][k];
				}									
			}
	 	}
 	}
	for(i=0;i<N;i++)printf("%d\n",b[i]+1);
}
