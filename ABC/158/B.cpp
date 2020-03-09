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
    ll n,a,b;cin>>n>>a>>b;
    ll ans = 0;
    ll c = a+b;
    ll div = n / c;
    ll amari = n % c;
    ans = div * a;
    if(amari > a) ans+=a;
    else ans += amari;
    cout << ans <<endl;

    return 0;
}

