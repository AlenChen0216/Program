#include <stdio.h>
#include <string.h>
int main (void){
	char a[80],f[70];
	int e[70];
	int i,b=0,c=0,k,j,h;
	int g=0,d=0,l=0,x=0,y=0;
	scanf("%d",&k);
	scanf("%s",&a);
	b=strlen(a);
	 for(i=0;i<b;i++){
	 	if(a[i]>='a'&&a[i]<='z'){
		 	a[i]=2;  
		 }else a[i]=1;	 	
	 }
	for(i=0;i<b;i++){
		if(a[i]==2){
		  for(h=0;h<k-(k-1);h++){
			if(a[i]==a[j+h]&&a[i+k]!=2){
			l++;	
			//printf("X%d,%d\n",l,i);
			}
		 }
			if(l==k){
			g+=1;
			l=0;			
			//printf("G%dF%d\n",g,l);	
		}
			j+=1;
			continue;	
		}else if(a[i]==1){
		  for(h=0;h<k-(k-1);h++){
			if(a[i]==a[j+h]&&a[i+k]!=1){
				
			c++;				
				//printf("Y%d,%d\n",c,i);
			}
				
		 }
			if(c==k){
				d+=1;
				c=0;
				//printf("D%dC%d\n",d,c);	
			}
			j+=1;
			continue;
	}
 }	 	
 i=0,j=0;
 	if(a[i]==2&&a[i+k]==2&&g==k){
 		g-=1;
	 }else if(a[i]==1&&a[i+k]==1&&d==k){
	 	d-=1;
	 }else i++;
	 //printf("U %d,U2 %d,U3 %d\n",g,d,i);
 	for(i=0;i<b;i++){
 	  if(a[j]==1&&a[j+k]!=1){
 	  //printf("I%d\n",j);
		break;
	}else if(a[j]==2&&a[j+k]!=2){
 	  //printf("P%d\n",j);
	   break;	  	
	}else j++;
  }
 	if(a[j]+1==a[j+k]){
 		g=g+d;
	 }else if(a[j]-1==a[j+k])g=g+d;
   
	 //printf("%d %d\n",g*k,d);
	 printf("%d",g*k);
 //for(i=0;i<b;i++)printf("A%d ",a[i]);

}
