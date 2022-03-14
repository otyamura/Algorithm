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

long double t;
long double l, x, y;
long double q;
long double p = M_PI;

long double query(long double i) {
  long double cx = 0;
  long double cy = -(l / 2.0) * sin(i / t * 2.0 * p);
  long double cz = (l / 2.0) - (l / 2.0) * cos(i / t * 2.0 * p);
  long double d1 = sqrt(pow(cx - x, 2.0) + pow(cy - y, 2.0));
  long double d2 = cz;
  long double kaku = atan2(d2, d1);
  return kaku * 180.0L / p;
}

int main(){
  cin >> t;
  cin >> l >> x >> y;
  cin >> q;
  rep(i, q) {
    long double e;
    cin >> e;
    printf("%.12Lf\n", query(e));
  }
  return 0;
}