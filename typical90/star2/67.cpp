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

ll base8_to_long(string n) {
  ll result = 0;
  rep(i, n.size()) {
    result = int(n[i] - '0') + result * 8;
  }
  return result;
}

string to_nine(ll n) {
  if (n == 0) return "0";
  string tmp;
  while(n > 0) {
    tmp = char(n % 9 + '0') + tmp;
    n /= 9;
  }
  return tmp;
}


int main(){
  string n;
  int k;
  cin >> n >> k;

  rep(i, k) {
    string s = to_nine(base8_to_long(n));
    replace(s.begin(), s.end(), '8', '5');
    n = s;
  }
  cout << n << endl;
  return 0;
}