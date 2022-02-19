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

  vector<vector<int>> students(2, vector<int>(n+1));
  int tmp0 = 0, tmp1 = 0;
  rep_2(i, 1, n+1) {
    int c, p;
    cin >> c >> p;
    c--;
    if (c == 0) {
      tmp0 += p;
    } else {
      tmp1 += p;
    }
    students[0][i] = tmp0;
    students[1][i] = tmp1;
  }

  int q;
  cin >> q;
  vector<pair<int, int>> lr(q);
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    lr[i].first = l;
    lr[i].second = r;
  }

  rep(i, q) {
    int a, b;
    a = students[0][lr[i].second] - students[0][lr[i].first-1];
    b = students[1][lr[i].second] - students[1][lr[i].first-1];
    cout << a << " " << b << endl;
  }

  return 0;
}