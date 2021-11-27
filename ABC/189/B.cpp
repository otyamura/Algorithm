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
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> v;
  rep(i, n) {
    int V, p;
    cin >> V >> p;
    v.push_back(make_pair(V, p));
  }
  ll alc = 0;
  int overInd = -1;
  for(int i = 0; i < n; i++) {
    pair<int, int> p = v[i];
    alc += p.first * p.second;
    if (alc > x * 100) {
      overInd = i + 1;
      break;
    }
  }

  cout << overInd << endl;
  return 0;
}
