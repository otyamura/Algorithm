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
  int a, b, w;
  cin >> a >> b >> w;
  w *= 1000;

  int mn = INF, mx = -1;
  for (int i = 1;i <= w; i++) {
    int A = i * a;
    int B = i * b;
    if (A <= w && w <= B) {
      mn = min(mn, i);
      mx = max(mx, i);
    }
  }

  if (mn == INF) cout << "UNSATISFIABLE" << endl;
  else cout << mn << " " << mx << endl;

  return 0;
}
