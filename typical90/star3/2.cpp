#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
#define rep_1(i, n) for (int(i) = 0; (i) <= (n); (i)++)
#define rep_2(i, a, b) for (int(i) = (a); (i) < (b); (i)++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

bool is_bracket(string s) {
  int cnt = 0;
  rep(i, s.size()) {
    if (s[i] == '(') {
      cnt++;
    } else {
      if (cnt == 0) {
        return false;
      }
      cnt--;
    }
  }
  return cnt == 0;
}

int main() {
  int n;
  cin >> n;
  if (n % 2 == 1) return 0;
  vector<string> ans;
  for (int i = 0; i < (1 << n); i++) {
    string tmp = "";
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        tmp += "(";
      } else {
        tmp += ")";
      }
    }
    if (is_bracket(tmp)) {
      ans.push_back(tmp);
    }
  }
  sort(all(ans));
  for(string s : ans) {
    cout << s << endl;
  }

  return 0;
}