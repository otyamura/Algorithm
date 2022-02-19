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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> b(n);
  rep(i, n) {
    cin >> a[i];
  }
  rep(i, n) {
    cin >> b[i];
  }
  ll dif = 0;
  rep(i, n) {
    dif += abs(a[i] - b[i]);
  }

  if (dif > k) {
    cout << "No" << endl;
    return 0;
  }

  if (dif % 2 != k % 2) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}