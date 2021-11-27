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

  ll ans = 0;

  for (int i = 1;i <= n;i++) {
    bool hasSeven = false;
    string s = to_string(i);
    if (s.find('7') != string::npos) hasSeven = true;
    stringstream ss;
    ss << oct << i;
    s = ss.str();
    if (s.find('7') != string::npos) hasSeven = true;

    if(!hasSeven) ans++;
  }
  cout << ans << endl;

  return 0;
}