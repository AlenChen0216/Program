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
int cmp (const void * d, const void * c)
{
   return ( *(int*)c - *(int*)d );
}
const int L = 300002;
const int M = 1000000007;
long long int re();
void solve();
void solve(){


    int x,h,y;
    scanf("%d%d%d",&x,&h,&y);
    int de = x-y;
    if(de<0){
        printf("0\n");
    }else {
        int ans=0;
        int i=0;
        int j=0;
        int day=0;
        for(i=0;i<h/10;i++){
            for(j=0;j<10;j++){
                day++;
                ans+=i+1;
                if(ans>=de){
                    printf("%d",day);
                    return 0;
                }
            }
        }
        printf("IMPOSSIBLE");
        return 0;
    }
}
int main(){
    printf("ortD");
    //int t;
    //scanf("%d",&t);
    //while(t) {
        solve();
    //}
    return 0;
}
