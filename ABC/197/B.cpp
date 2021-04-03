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
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  vector<vector<char>> v(h, vector<char>(w));
  rep(i, h) {
    rep(j, w) {
      cin >> v[i][j];
    }
  }
  h--;
  w--;
  x--;
  y--;

  int ans = 0;
  int dx = x;
  int dy = y;
  // left
  while (dy > 0) {
    dy--;
    if (dy < 0) break;
    if ('#' == v[x][dy]) break;
    ans++;
  }

  dy = y;
  // right
  while (dy < w) {
    dy++;
    if (dy > w) break;
    if ('#' == v[x][dy]) break;
    ans++;
  }

  // up
  dx = x;
  dy = y;
  while (dx > 0) {
    dx--;
    if (dx < 0) break;
    if ('#' == v[dx][y]) break;
    ans++;
  }
  // down
  dy = y;
  dx = x;
  while (dx < h) {
    dx++;
    if (dx > h) break;
    if ('#' == v[dx][y]) break;
    ans++;
  }

  cout << ans + 1 << endl;
  return 0;
}
