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
  ll n;
  ll a,b,c;
  cin >> n;
  cin >> a >> b >> c;
  ll ans = 1LL << 30;
  int L = 9999;
  for(int i = 0;i <= L;i++) {
    for(int j = 0;i + j <= L;j++) {
      ll v = n - i * a  * 1LL - 1LL * j * b;
      ll cnt = 1LL * i + 1LL * j + v / c;
      if (v % c != 0LL || v < 0 || cnt > 9999LL) continue;
      ans = min(ans, cnt);
    }
  }
  cout << ans << endl;
  return 0;
}