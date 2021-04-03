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
  int a, b;
  cin >> a >> b;
  int c = a + b;
  int ans;
  if (c >= 15 && b >= 8) ans = 1;
  else if (c >= 10 && b >= 3) ans = 2;
  else if (c >= 3) ans = 3;
  else ans = 4;

  cout << ans << endl;
  return 0;
}
