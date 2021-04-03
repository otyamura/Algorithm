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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll min = LINF;
  ll left = 0;
  ll right = 0;
  for (int i = 0; i < n; i++) {
    right = right | a[i];
  }


  for(int i = 0;i < n - 1;i++) {
    left = left | a[i];
    for (int j = i + 1;j < n;j++){
      if (a[i] > right) {
        right = right - a[i];
      }
      ll tmp = left ^ right;
      if (tmp < min) min = tmp;
    }
  }
  cout << min << endl;
  return 0;
}
