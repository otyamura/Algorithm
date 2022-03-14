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
  int size = 46;
  vector<int> a(size), b(size), c(size);
  rep(i, n) {
    int tmp;
    cin >> tmp;
    a[tmp % size]++;
  }
  rep(i, n) {
    int tmp;
    cin >> tmp;
    b[tmp % size]++;
  }
  rep(i, n) {
    int tmp;
    cin >> tmp;
    c[tmp % size]++;
  }
  ll ans = 0;
  rep(i, size) {
    rep(j, size) {
      rep(k, size) {
        if(a[i] <= 0) continue;
        if(b[j] <= 0) continue;
        if(c[k] <= 0) continue;
        if ((i + j + k) % size == 0) {
          ans += 1LL * a[i] * b[j] * c[k];
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}