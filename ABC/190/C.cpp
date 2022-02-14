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
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> cond;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    cond.push_back(make_pair(a,b));
  }

  int k;
  cin >> k;
  vector<pair<int, int>> put;
  rep(i, k) {
    int c, d;
    cin >> c >> d;
    c--, d--;
    put.push_back(make_pair(c, d));
  }

  int  ans = 0;

  for (int i = 0;i < (1 << k);i++) {
    vector<bool> select(n);
    for(int j = 0;j < k;j++) {
      // bitが立っていれば右側を選択
      if (i & (1<<j)) {
        select[put[j].second] = true;
      } else {
        select[put[j].first] = true;
      }
    }
    // 条件に合っているものがあるか調べる
    int tmp = 0;
    rep(c, m) {
      if (select[cond[c].first] && select[cond[c].second]) tmp++;
    }
    ans = max(ans, tmp);
  }

  cout << ans << endl;

  return 0;
}
