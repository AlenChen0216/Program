#include<iostream>
//#include<bits/stdc++.h>
#define  m(a,b) a*(b)
#define  m2(a,b) (a)+b
#include<vector>
#include<algorithm>
#include<string>
const int p=1000000007;
using namespace std;
long long int gd(long long int a,long long int b ){
    if(b==0){
        return a;
    }else return gd(b,a%b);
}
void solve(int t){
    int n;
    cin>>n;
    long long int ans=1;
    for(int i=3;i<=n<<1;i++){
        ans= ans*i%p;
        cout<<"The "<<t<<" Value: "<<ans<<" "<<i<<" "<<(n<<1)<<"\n";
    }
    cout<<ans<<"\n";

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //cout<<setprecision(10)<<2.0/3;
    int t;
    cin>>t;
    while(t--){
        solve(t);
    }

}
