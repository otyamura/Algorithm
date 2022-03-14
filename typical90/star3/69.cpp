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

int modPow(ll a, ll n) {
  if (n == 0) return 1;
  if (n == 1) return a % MOD;
  if (n % 2 == 1) return (a * modPow(a, n - 1)) % MOD;
  ll t = modPow(a, n / 2);
  return (t * t) % MOD;
}

int main(){
  ll n, k;
  cin >> n >> k;
  ll ans = 0;
  if (n == 1) {
    ans = k;
  } else if (n == 2) {
    ans = k * (k-1);
  } else {
    ans = k * (k - 1) % MOD;
    ans *= modPow(k-2, n - 2);
  }
  cout << ans % MOD<< endl;
  return 0;
}