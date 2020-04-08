#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int inf = 1e9;
const int mod = 1e9+7;
const ll linf = 1e18;

int main()
{
  ll x; cin >> x;
  ll ans = 0;
  ans = x / 500;
  ans *= 1000;
  x = x % 500;
  ans += (x / 5) * 5;
  cout << ans << endl;
  return 0;
}