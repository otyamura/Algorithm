#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main()
{
  int n;
  double m;
  cin >> n >> m;
  vector<int> a(n);
  double sum = 0;
  ll count = 0;
  rep(i,n){
    cin >> a[i];
    sum += a[i];
  }
  double check = sum * 1/(4 * m);
  rep(i,n) {
    if(a[i] >= check) count++;
  }

  if(count >= m) cout <<"Yes" <<endl;
  else cout <<"No" <<endl;
  return 0;
}