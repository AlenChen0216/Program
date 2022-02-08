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
    int n;
    scanf("%d",&n);
    int *la=calloc(L,sizeof(int));
    int *ans=calloc(L,sizeof(int));
    int i,j,g;
    for(i=0;i<n;i++){
        scanf("%d",&la[i]);
        ans[i]=0;
    }
    for(i=0;i<n;i++){
        if(la[i]>0){
            g=max(0,i-la[i]+1);
            for(j=i;j>max(-1,i-la[i]/2-1);j--){
                ans[j]=1;
                ans[g]=1;
                g++;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");
    free(ans);
    free(la);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
