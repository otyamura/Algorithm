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
  vector<ll> s(200);

  rep(i, n) {
    cin >> a[i];
    s[a[i]%200]++;
  }

  ll ans = 0;
  for(int i = 0;i < 200;i++){
    if (s[i] <= 1) continue;
    ans += 0.5 * s[i] * (s[i] - 1);
  }
  cout << ans << endl;

  return 0;
}
