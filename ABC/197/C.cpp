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
  int n;
  cin >> n;
  vector<ll> a(n);
  ll mn = LINF;
  rep(i, n) cin >> a[i];
  for(int i = 0; i < (1 << (n-1)); i++) {
    vector<ll> v;
    int ind = 0;
    ll ored = 0;
    for (int j = 0;j < n;j++) {
      ored |= a[ind];
      ind++;
      if (i & (1 << j)) {
        v.push_back(ored);
        ored = 0;
      }
    }
    v.push_back(ored);
    // separate length
    // cout << "size : " << v.size() << endl;
    if (v.size() <= 0) continue;
    ll xored = 0;
    // cout << "i : " << i << endl;
    for (ll x : v) {
      // cout << x << endl;
      xored = xored ^ x;
    }
    mn = min(mn, xored);
  }
  cout << mn << endl;
  return 0;
}
