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
    ll n,m;cin>>n>>m;
    vector<bool> a(n+1,true);
    rep(i,m){
        ll tmp;cin>>tmp;
        a[tmp] = false;
    }
    vector<ll> dp(n+1);

    dp[0] = 1;
    if(a[1]) dp[1] = 1;
    for(ll i =  2;i<=n;i++){
        if(a[i-1])dp[i] += dp[i-1];
        if(a[i-2])dp[i] += dp[i-2];
        dp[i] %= MOD;
    }

    cout << dp[n] <<endl;
}

