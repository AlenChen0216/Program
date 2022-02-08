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
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ans=0;
    int num=1;
    for(i=0;i<=n;i++){
        for(j=0;j<n;j++){
            if(a[j]==i+1){
                if(fabs(a[i]-j-1)>ans){
                    ans=fabs(a[i]-j-1);
                    num=a[j];
                }else if(fabs(a[i]-j-1)==ans){
                    num=min(num,a[j]);
                }
            }
        }
    }
    printf("%d %d",ans,num);

}
int main(){
    //int t;
    //scanf("%d",&t);
    //while(t) {
        solve();
    //}
    return 0;
}
