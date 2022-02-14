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
  vector<vector<int>> A(h, vector<int>(w));

  rep(i, h) {
    rep(j, w) {
      cin >> A[i][j];
    }
  }

  vector <int> sum_h(w), sum_w(h);

  rep(i, h) {
    rep(j, w) {
      sum_h[j] += A[i][j];
      sum_w[i] += A[i][j];
    }
  }

  rep(i, h) {
    rep(j, w) {
      int tmp = 0;
      tmp = sum_h[j] + sum_w[i] - A[i][j];
      cout << tmp << " ";
    }
    cout << endl;
  }

  return 0;
}