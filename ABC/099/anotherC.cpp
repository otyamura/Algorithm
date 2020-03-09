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


// 再帰　メモ　DP

vector<ll> memo;

ll rec(ll n){
    if (n == 0) return 0; //終端条件
    if (memo[n] != 0) return memo[n]; //既に探索済みならリターン

    ll res = LINF;

    for(int pow6 = 1;pow6 <= n;pow6 *= 6){
        res = min(res, rec( n - pow6 ) + 1);
    }

    for(int pow9 = 1;pow9 <= n;pow9 *= 9){
        res = min(res,rec (n - pow9 ) + 1);
    }

    return memo[n] = res;

}

int main(){
    int n;cin>>n;

    memo.resize(n+1,0);

    cout<<rec(n)<<endl;


    return 0;
}

