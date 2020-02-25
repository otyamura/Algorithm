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
    //累積和
    int n;cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];

    vector<ll> s(n+1);
    rep(i,n) s[i+1] = s[i]+a[i];

    map<ll,ll> mp;
    rep_1(i,n) mp[s[i]]++;

    ll ans =0;
    for(auto x:mp){
        ll tmp = x.second;
        ans+=tmp*(tmp-1)/2;
    }
    cout<<ans<<endl;

}

