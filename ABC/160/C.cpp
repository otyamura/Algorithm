#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main()
{
  int k,n;
  cin>>k>>n;
  vector<int> a(n);
  vector<int> v(n+1);
  rep(i,n) cin>>a[i];
  int mx = -1;
  for(int i=1; i<n;i++) {
    v[i] = a[i] - a[i-1];
  }
  v[n] = k - a[n-1] + a[0];
  ll ans = accumulate( all(v) , 0);
  for(auto dis : v) {
    mx = max(mx, dis);
  }
  ans -= mx;
  cout << ans << endl;

  return 0;
}