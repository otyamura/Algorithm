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
  int n, p, q;
  cin >> n >> p >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  rep(i, n) {
    rep(j, i) {
      rep(k, j) {
        rep(l, k) {
          rep(m, l) {
            if (1LL * a[i] * a[j] % p * a[k] % p * a[l] % p * a[m] % p== q) ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}