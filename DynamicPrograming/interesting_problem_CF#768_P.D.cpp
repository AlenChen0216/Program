//#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int L=1000000007;
int check(vector<int>&a,int x,int y,int k){
    int n=a.size();
    int l=lower_bound(a.begin(),a.end(),x)-a.begin();
    int r=upper_bound(a.begin(),a.end(),y)-a.begin();
    int cor=r-l;
    int incor=n-cor;
    return cor-incor>=k;
}
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n,0),tra(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    tra=a;
    sort(tra.begin(),tra.end());
    int mn=tra[0];
    int mx=tra[n-1];
    pair<int ,int > range;
    int M=L;
    for(int i=mn;i<=mx;i++){
        int x=i;
        int l=i;
        int r=mx+1;
        int y=mx+1;
        int mid;
        while(l<r){
            mid=(l+(r-1))/2;
            cout<<"Left :"<<l<<" Right :"<<r<<" Middle :"<<mid<<"\t";
            if(check(tra,x,mid,k)){
                r=mid;
                y=mid;
            }else {
                l=mid+1;
            }
            cout<<"After : "<<l<<" "<<r<<" "<<mid<<endl;
        }
        int mu=y-x;
        if(y<mx+1&&mu<M){
            M=mu;
            range={x,y};
        }
    }
    cout<<range.first<<" "<<range.second<<"\n";
    int l=0;
    int tem=0;
    for(int i=0;i<n&&k>1;i++){
        if(a[i]>=range.first&&a[i]<=range.second){
            tem++;
        }else{
            tem--;
        }
        if(tem==1){
            cout<<l+1<<" "<<i+1<<"\n";
            l=i+1;
            k--;
            tem=0;
        }
    }
    cout<<l+1<<" "<<n<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cin>>stew(10);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
