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
  int h, w, n;
  cin >> h >> w >> n;
  vector<pair<int, int>> v;
  rep(i, n) {
    int a,b;
    cin >> a >> b;
    v.push_back(pair<int, int>(a,b));
  }

  sort(all(v));

  int diff = 0;
  int num = 1;

  for (auto& p : v) {
    diff = p.first - num;
    num = p.first;
    p.first = p.first - diff;
  }

  for (auto& p : v) {
    swap(p.first, p.second);
  }
  sort(all(v));

  diff = 0;
  num = 1;

  for (auto& p : v) {
    diff = p.first - num;
    num = p.first;
    p.first = p.first - diff;
  }

  for (auto& p : v) {
    swap(p.first, p.second);
  }

  for (auto& p : v) {
    cout << p.first << " " << p.second << endl;
  }
  return 0;
}
