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

void my_solve() {
  int n, m;
  cin >> n >> m;
  vector<int> g(n+1);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    if (a > b) {
      if (g[a] != 0) {
        g[a] = -1;
      } else {
        g[a] = 1;
      }
    }
    if (b > a) {
      if (g[b] != 0) {
        g[b] = -1;
      } else {
        g[b] = 1;
      }
    }
  }
  int ans = 0;
  rep(i, n+1) {
    if(g[i] == 1) ans++;
  }
  cout << ans << endl;
}

void ans_solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  int ans = 0;
  rep(i, n) {
    int cnt = 0;
    for(int x : g[i]) {
      if (i > x) {
        cnt++;
      }
    }
    if (cnt == 1) {
      ans++;
    }
  }
  cout << ans << endl;
}

int main(){
  // my_solve();
  ans_solve();
  return 0;
}