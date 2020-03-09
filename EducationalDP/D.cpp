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

    int n;cin>>n;
    vector<vector<ll>> a(n,vector<ll>(3));

    vector<vector<ll>> dp(n+1,vector<ll>(3));

    rep(i,n){
        rep(j,3){
            cin>>a[i][j];
        }
    }

    rep(i,n){
        rep(j,3){
            rep(k,3){
                if(j == k) continue;
                dp[i+1][k] = max(dp[i+1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    ll ans = 0;
    rep(i,3) ans = max(ans,dp[n][i]);
    cout<<ans<<endl;

    return 0;
}

