#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

ll gcd(ll a, ll b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

ll lcm(ll a, ll b) {
  ll d = gcd(a, b);
  return a / d * b;
}

int main(){
  ll a, b;
  cin >> a >> b;
  ll ans = b / gcd(a, b);
  ll d = 1;
  rep(i, 18){
    d *= 10;
  }

  if (ans > d / a){
    cout << "Large" << endl;
  } else {
    cout << ans * a << endl;
  }
  return 0;
}