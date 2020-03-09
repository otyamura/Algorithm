#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main(){
    //貰う　DP
    ll n;cin>>n;
    vector<ll> h(n);
    rep(i,n) cin >>h[i];
    vector<ll> dp(n);
    //初期化　（最小化問題なのでINFに初期化)
    rep(i,n)dp[i]=LINF;

    //初期条件
    dp[0]=0;
    for(ll i = 1;i<n;i++){
        chmin(dp[i], dp[i-1] + abs( h[i] - h[i-1] ) ); //1つ前の足場とのコスト
        if(i > 1) chmin(dp[i], dp[i-2] + abs( h[i] - h[i-2] ) ); //2つ前の足場とのコスト
    }
    //答え
    cout << dp[n-1]<<endl;

    return 0;
}

