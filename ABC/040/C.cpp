#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main(){
    //配る DP
    ll n;cin>>n;
    vector<ll> h(n);
    rep(i,n) cin>>h[i];
    vector<ll> dp(n+1,LINF);

    dp[0] = 0;
    rep(i,n){
        dp[i+1] = min(dp[i+1],dp[i] + abs(h[i+1]-h[i]));
        dp[i+2] = min(dp[i+2],dp[i] + abs(h[i+2]-h[i]));
    }
    cout << dp[n-1]<<endl;

}

