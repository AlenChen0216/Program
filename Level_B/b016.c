#include<stdio.h>
#include<string.h>
#define P 100
int Input(char s[]){
	char n[P]={0};
	int i,l;
	for(i=0;i<P;i++) s[i]=0;
	if(scanf("%s",n)<1) return -1;
	l=strlen(n);
	for(i=0;i<l;i++){
		s[i]=n[l-i-1]-'0';
	}
		return 0;
}
int strcp(char a1[],char a2[]){
	int i;
	for(i=0;i<P;i++){
		a1[i]=a2[i];
	}
}
int Com(char a[],char s[]){
	int i=0;
	char tem[P]={0};
	int l,w;
	for(l=P-1;l>0;l--) if(a[l]!=0) break;
	for(w=P-1;w>0;w--) if(s[w]!=0) break;		
		if(a[l]==-3) l--;
		if(s[w]==-3) w--;
		printf("TREF%d , RTE%d\n",s[w+1],a[l+1]);
	if(w>l){
		printf("TR2\n");
		strcp(tem,s);
		strcp(s,a);
		strcp(a,tem);
		if((a[w+1]==-3&&s[l+1]==-3)||(a[w+1]!=-3&&s[l+1]!=-3)) return 1; 
		return 0;
	}else if(l>w) {
		if((a[l+1]==-3&&s[w+1]==-3)||(a[l+1]!=-3&&s[w+1]!=-3))  return 1;	
		return 0;	
	}
	for(l;l>=0;l--){	
		if(a[l]==s[l]){
			continue;
		}else if(a[l]>s[l]){
			if((a[l+1]==-3&&s[w+1]==-3)||(a[l+1]!=-3&&s[w+1]!=-3)) return 1;	
			return 0;	
		}else if(a[l]<s[l]){
			strcp(tem,s);
			strcp(s,a);
			strcp(a,tem);
			if((a[l+1]==-3&&s[w+1]==-3)||(a[l+1]!=-3&&s[w+1]!=-3)) return 1;
			return 0;	
		}
	}
	return 0;	
}

int Add(char s1[],char s2[],char sum[]){
	int i; 
	for(i=0;i<P;i++){
		if(	Com(s1,s2)==1){
			printf("O5\n");
			if(s1[i]==-3&&s2[i]==-3){
				continue;
			}else if(s1[i]!=-3&&s2[i]==-3){
				sum[i]=s1[i];
				continue;
			} 
		sum[i]=s1[i]+s2[i];			
		}else if(Com(s1,s2)==0){
			printf("F5\n");
			if(s1[i]!=-3&&s2[i]==-3){
				sum[i]=s1[i];
				continue;
			}
			sum[i]=s1[i]-s2[i];
			printf("%d\n",sum[i]);
		}	
	} 
	for(i=0;i<P-1;i++){
		if(sum[i]>=10&&sum[i+1]==-3){
			sum[i+2]=-3;
			sum[i+1]+=sum[i]/10+3;
			sum[i]=sum[i]%10;
		}else if(sum[i]<0&&sum[i]!=-3){
			sum[i]+=10;
			sum[i+1]-=1;
			printf("GH%d %d\n",i,sum[i]);
			if(sum[i]>=10){
				sum[i+1]+=sum[i]/10;
				sum[i]=sum[i]%10;
			}
		}else if(sum[i]>=10){
			sum[i+1]+=sum[i]/10;
			sum[i]=sum[i]%10;
		}	
		
	}
}
void Print(char sum[]){
	int i;	
	for(i=P-1;i>0;i--) if(sum[i]!=0) break;
	for(;i>=0;i--) {
		if(sum[i]==-3){
			
			continue;
		}
	printf("%d",sum[i]);	
	}
	printf("\n");
}
int main(){
	char a[P],b[P],c[P];
	Input(a);
	Print(a);
	Input(b);
	Print(b);
	Add(a,b,c);
	Print(c);
	return 0;
}
