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
  vector<vector<int> > a(n, vector<int>(n));
  rep(i, n) {
    rep(j, n) {
      cin >> a[i][j];
    }
  }

  int m;
  vector<vector<int>> g(n);
  cin >> m;

  rep(i, m) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    g[x].push_back(y);
    g[y].push_back(x);
  }

  vector<int> v;
  rep(i, n) v.push_back(i);
  int ans = INF;

  do {
    bool ok = true;
    for(int i = 0;i < n - 1;i++) {
      int l, r;
      l = v[i];
      r = v[i + 1];
      // 嫌い判定
      for(int x : g[l]) {
        if(x == r) {
          ok = false;
        }
      }

    }
    if (ok) {
      int tmp = 0;
      int j = 0;
      for (int index : v) {
        tmp += a[index][j];
        j++;
      }
      ans = min(ans, tmp);
    }
  } while (next_permutation(all(v)));
  if (ans == INF) cout << "-1" << endl;
  else cout << ans << endl;
  return 0;
}