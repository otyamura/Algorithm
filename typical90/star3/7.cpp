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
  rep(i, n) cin >> a[i];
  int q;
  cin >> q;
  vector<int> b(q);
  rep(i, q) cin >> b[i];
  sort(all(a));
  rep(i, q) {
    auto ite = lower_bound(all(a), b[i]);
    int mn = abs(*ite - b[i]);
    if (ite - a.begin() > 0) {
      mn = min(mn, abs(a[ite-a.begin()-1] - b[i]));
    }
    cout << mn << endl;
  }
  return 0;
}