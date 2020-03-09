#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

vector<ll> h,dp;

ll rec(int i){
    // DPの値が更新されていたらそのままリターン
    if(dp[i] < LINF) return dp[i];
    // 足場0のコストは0
    if( i == 0 ) return 0;
    
    //i-1,i-2　それぞれ試す
    ll res = LINF;

    chmin(res,rec(i-1) + abs( h[i] - h[i-1] ));//足場i-1からきた場合
    if(i > 1) chmin(res, rec(i-2) + abs( h[i] - h[i-2] ));//足場i-2からきた場合

    //結果をメモしながら、返す
    return dp[i] = res;
}

int main(){
    int n;cin >>n;
    h.resize(n);
    dp.resize(n+1,LINF);
    rep(i,n)cin>>h[i];

    cout<<rec(n-1)<<endl;
}

