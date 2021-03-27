#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep_1(i, n) for (int(i) = 0; (i) <= (n); (i)++)
#define rep_2(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

// //最大公約数
// ll gcd(ll a, ll b){
//     if(b==0) return a;
//     else return gcd(b, a%b);
// }

// //最小公倍数
// ll lcm(ll a, ll b){
//     return a / gcd(a,b) * b;
// }

int main() {
  ll a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;
  return 0;
}