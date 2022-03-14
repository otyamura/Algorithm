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
  int n,k;
  cin >> n >> k;
  vector<pair<int, int>> v(n);
  rep(i, n) {
    cin >> v[i].first >> v[i].second;
  }

  vector<int> a;
  rep(i, n) {
    a.push_back(v[i].second);
  }
  rep(i, n) {
    a.push_back(v[i].first - v[i].second);
  }

  ll ans = 0;
  sort(rall(a));
  rep(i, k) {
    ans+= a[i];
  }
  cout << ans << endl;
  return 0;
}