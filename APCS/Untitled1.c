#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
const int L = 200000;
const int M = 1000000007;
void solve();
void solve(){
    int n,k,time=0;
    scanf("%d%d",&n,&k);
    char s[n+2];
    scanf("%s",s);
    int  j,i;
    if(k>=n/2&&n%2==0){
        printf("NO\n");
        return 0;
    }else if(k==0){
        printf("YES\n");
        return 0;
    }else if(2*k+1==n){
        printf("YES\n");
        return 0;
    }
    for(i=0,j=n-1;i<n/2;i++,j--){
        if(s[i]!=s[j]){
            time--;
            break;
        }
         time++;
    }
    if(time<=0){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
