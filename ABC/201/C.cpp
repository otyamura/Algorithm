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
  string s;
  cin >> s;

  vector<char> ok;
  vector<char> ng;
  for(int i = 0; i < s.size(); i++) {
    char x = s[i];
    if (x == 'o') ok.push_back(i+'0');
    if (x == 'x') ng.push_back(i+'0');
  }

  int count = 0;

  for(int i = 0;i <= 9999;i++) {
    char n[5];
    snprintf(n, 5, "%04d", i);
    string num = n;
    bool isSatisfy = true;
    for (char o : ok) {
      bool isOk = false;
      // 必ず入っているかどうか
      for (char x : num) {
        if (x == o) {
          isOk = true;
          break;
        }
      }
      // 入っていなかった→満たさない
      if (!isOk) isSatisfy = false;
    }
    for (char n : ng) {
      bool isNg = false;
      // 入ってはいけないものが入っていないか
      for (char x : num) {
        if (n == x) {
          isNg = true;
          break;
        }
      }
      if(isNg) isSatisfy = false;
    }
    if (isSatisfy) count++;
  }

  cout << count << endl;

  return 0;
}
