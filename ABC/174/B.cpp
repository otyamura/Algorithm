#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep_1(i, n) for (int(i) = 0; (i) <= (n); (i)++)
#define rep_2(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {
  ll n, d;
  cin >> n >> d;
  vector<ll> x(n);
  vector<ll> y(n);
  rep(i, n) cin >> x[i] >> y[i];
  ll ans = 0;
  rep(i, n) {
    double dis = sqrt(pow(x[i], 2) + pow(y[i], 2));
    if (dis <= d) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}