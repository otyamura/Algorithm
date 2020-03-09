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
    ll n;cin>>n;
    vector<ll> a(n+1),b(n);
    rep(i,n+1) cin >> a[i];
    rep(i,n)cin >> b[i];

    ll ans = 0;
    rep(i,n){
        ll mn = min (a[i],b[i]);
        ans += mn;
        a[i]-=mn;
        b[i]-=mn;
        mn = min(a[i+1],b[i]);
        ans += mn;
        a[i+1]-=mn;
        b[i] -=mn;
    }
    cout << ans<<endl;


}

