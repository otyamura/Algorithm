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
  int h, w;
  cin >> h >> w;
  if (h == 1 || w == 1) {
    cout << h * w << endl;
    return 0;
  }
  int t = ceil(w / 2.0);
  int y = ceil(h / 2.0);

  cout << t * y << endl;

  return 0;
}