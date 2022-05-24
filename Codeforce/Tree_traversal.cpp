//#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
using ll =long long int ;
const ll L=20000000000000007;
void solve(){
    int n;
    cin>>n;
    vector<int> tree(n+1);
    vector<bool> leaf(n+1,true);
    for(int i=1;i<=n;i++){
        cin>>tree[i];
        leaf[tree[i]]=false;
    }
    if(n==1){
        cout<<"1\n1\n1\n\n";
        return ;
    }
    vector<int>  paths[n+1];
    vector<bool> used(n+1,false);
    int time=0;
    for(int i=1;i<=n;i++){
        if(!leaf[i]) continue;
        used[i]=true;
        paths[time].push_back(i);
        int pre=i;
        while(tree[pre]!=pre&&!used[tree[pre]]){
            pre=tree[pre];
            used[pre]=true;
            paths[time].push_back(pre);
        }
        time++;
    }
    cout<<time<<"\n";
    for(auto &p:paths){
        if(p.empty()) continue;
        cout<< (int) p.size()<<"\n";
        reverse(p.begin(),p.end());
        for(auto &i:p) cout<<i<<" ";
        cout<<"\n";
    }
    cout<<"\n";
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
