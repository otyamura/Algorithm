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
  string s;
  cin >> n;
  cin >> s;
  vector<pair<char, ll>> a;

  ll cnt = 0;
  rep(i, n) {
    cnt++;
    if (i == n-1 || s[i] != s[i+1]) {
      a.push_back(make_pair(s[i], cnt));
      cnt = 0;
    }
  }

  ll ret = 0;
  for(pair<char, ll> p : a) {
    ret += 1LL * p.second * (p.second + 1LL) / 2LL;
  }

  cout << n * (n + 1) / 2LL - ret << endl;

  return 0;
}