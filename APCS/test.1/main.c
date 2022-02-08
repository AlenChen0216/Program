#include <stdio.h>
#include <stdlib.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
int solve();
const int INF=100000000;
int solve(){
    int W,H;
    scanf("%d%d",&W,&H);
    int x1,x2,y1,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    int w,h;
    scanf("%d%d",&w,&h);
    int ans=INF;
    if(x2-x1+w<=W){
        ans=min(ans,max(w-x1,0));
        ans=min(ans,max(x2-(W-w),0));
    }
    if(y2-y1+h<=H){
        ans=min(ans,max(h-y1,0));
        ans=min(ans,max(y2-(H-h),0));
    }
    if(ans==INF){
        printf("-1\n");
    }else printf("%d\n",ans);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t){
        solve();
        t--;
    }
    return 0;
}



