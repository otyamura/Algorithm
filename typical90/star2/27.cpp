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
  map<string, int> s;
  vector<int> ans;
  rep(i, n){
    string tmp;
    cin >> tmp;
    if (!s.count(tmp)) {
      s[tmp] = 1;
      ans.push_back(i+1);
    }
  }

  for(int x: ans) {
    cout << x << endl;
  }
  return 0;
}