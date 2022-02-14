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
  int n, k;
  cin >> n >> k;

  vector<ll> v(n);
  rep(i, n) {
    rep(j, 3) {
      ll tmp;
      cin >> tmp;
      v[i] += tmp;
    }
  }
  vector<ll> s(n);
  s = v;
  sort(rall(v));

  int score = v[k - 1] - 300;


  rep(i, n) {
    if (s[i] >= score) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}
