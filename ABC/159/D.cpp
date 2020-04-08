#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main()
{
    ll n;cin>>n;
    vector<ll> a(n);
    //vector<ll> sum(n);
    map<ll,ll> sum;
    vector<ll> ans(n);
    vector<ll> tmp(n);
    vector<ll> tmp2(n);
    rep(i,n) {
        cin >> a[i];
        a[i]--;
        sum[a[i]]++;
    }
    ll ch = 0;
    rep(i, n)
    {
        tmp[i] = sum[i] * (sum[i] - 1) / 2;
        sum[i]--;
        tmp2[i] = sum[i] * (sum[i] - 1) / 2;
        sum[i]++;
        ch += tmp[i];
    }

    rep(i, n)
    {
        ll ok = 0;
        ok = ch - tmp[a[i]] + tmp2[a[i]];
        cout << ok << endl;
    }

    return 0;
}