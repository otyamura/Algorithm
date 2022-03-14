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
  vector<ll> a(n+1);
  ll size = 0;
  for(int i = 1;i <= n;i++) {
    cin >> a[i];
  }

  vector<ll> b(2*n+1);
  for(int i = 1;i <= n;i++) b[i] = b[i-1] + a[i];
  for(int i = 1;i <= n;i++) b[i+n] = b[i+n-1] + a[i];
  if (b[n] % 10LL != 0LL) {
    cout << "No" << endl;
    return 0;
  }

  for(int i = 0;i <= n;i++) {
    ll goal = b[i] + b[n] / 10LL;
    auto pos = lower_bound(b.begin(), b.end(), goal);
    if (*pos == goal) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}