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
  map<int, int> a;
  rep(i, n) {
    int tmp;
    cin >> tmp;
    a[tmp]++;
  }
  ll ans = 0;
  for (auto p1 : a) {
    for (auto p2 : a) {
      if (p1.first >= p2.first) continue;
      ans += pow(p1.first - p2.first, 2) * p1.second * p2.second;
    }
  }
  cout << ans << endl;
  return 0;
}
