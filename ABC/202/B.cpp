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
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (s[i] == '6') s[i] = '9';
    else if (s[i] == '9') s[i] = '6';
  }
  reverse(all(s));
  cout << s << endl;
  return 0;
}
