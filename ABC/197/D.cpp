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
  double x0, y0, x2, y2;
  cin >> n >> x0 >> y0 >> x2 >> y2;

  double xc = (x0 + x2) / 2.0;
  double yc = (y0 + y2) / 2.0;

  double xl = xc - x0;
  double yl = yc - y0;

  double r = sqrt(xl * xl + yl * yl);
  double alpha = atan2(y0 - yc, x0 - xc) + 2 * M_PI / (double)n;

  double x1 = r * cos(alpha) + xc;
  double y1 = r * sin(alpha) + yc;

  cout << setprecision(9) << x1 << " " << y1 << endl;



  return 0;
}
