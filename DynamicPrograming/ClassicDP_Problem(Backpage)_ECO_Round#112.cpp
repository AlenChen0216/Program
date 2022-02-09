//#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int L=1000000007;
void create(){
}
vector<int>d (1001,1001);
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>b(n);
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int sum=0;
    for(auto i:b){
        sum+=d[i];
    }
    k=min(k,sum);
    vector<int>dp(k+1,0);
    for(int i=0;i<n;i++){
        for(int j=k-d[b[i]];j>=0;j--){
            dp[j+d[b[i]]]=max(dp[j+d[b[i]]],dp[j]+c[i]);
        }
    }
    cout<<dp[k]<<"\n";
}
int main(){
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
