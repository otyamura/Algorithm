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
  int n, l;
  cin >> n >> l;
  vector<int> a(n+1);
  a[0] = 1;
  rep(i, n) {
    a[i + 1] = (a[i + 1] + a[i]) % MOD;
    if (i + l <= n) a[i + l] = (a[i + l] + a[i]) % MOD;
  }
  cout << a[n] % MOD << endl;
  return 0;
}