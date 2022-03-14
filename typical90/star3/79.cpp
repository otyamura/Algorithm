#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define rep_1(i, n) for (int(i) = 0; (i) <= (n); (i)++)
#define rep_2(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  vector<vector<int>> b(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) rep(j, w) cin >> b[i][j];

  ll ans = 0;
  rep(i, h - 1) {
    rep(j, w - 1) {
      int diff = b[i][j] - a[i][j];
      a[i][j] += diff;
      a[i][j + 1] += diff;
      a[i + 1][j] += diff;
      a[i + 1][j + 1] += diff;
      ans += abs(diff);
    }
  }

  rep(i, w) {
    if (a[h-1][i] != b[h-1][i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  rep(i, h) {
    if (a[i][w-1] != b[i][w-1]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  cout << ans << endl;

  return 0;
}