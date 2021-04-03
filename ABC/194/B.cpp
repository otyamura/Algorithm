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
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n) {
    cin >> a[i] >> b[i];
  }

  int ans = INF;
  rep (i, n) {
    rep(j, n) {
      int tmp = 0;
      if (i == j) {
        tmp = a[i] + b[j];
      } else {
        tmp = max(a[i], b[j]);
      }
      ans = min(ans, tmp);
    }
  }

  cout << ans << endl;
  return 0;
}
