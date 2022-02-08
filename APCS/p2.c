
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
const int L = 300002;
const int M = 1000000007;
int bi();
void solve();
void solve(){
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           scanf("%d",&a[i][j]);
        }
    }
    int ans=0,mi=0;
    for(i=0;i<=n-1;i+=2){
        int temp1=0;
        int temp2=0;
        for(j=0;j<m;j++){
            ans+=a[i][j];
            if(i+1!=n){
                temp1+=a[i+1][j];
            }
            temp2+=a[i][j];
        }
        if(temp1>temp2){
            ans=(ans+temp1)-(temp2-a[i][0]);
        }else if(temp1==(temp2-a[i][0])){
            ans+=a[i+1][m-1];
        }
    }
    printf("%d",ans);
}
int main(){
    //int t;
    //scanf("%d",&t);
    //while(t) {
        solve();
    //}
    return 0;
}
