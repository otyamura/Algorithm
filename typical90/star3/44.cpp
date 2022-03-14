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


void wrong_solve() {
  int n, q;
  cin >> n >> q;

  list<int> l;

  rep(i, n) {
    int a;
    cin >> a;
    l.push_back(a);
  }

  rep(i, q) {
    int t, x, y;
    cin >> t >> x >> y;
    auto iter = l.begin();
    auto iterR = l.begin();
    int tmp;
    x--, y--;
    switch (t) {
      case 1:
        rep(j, x) iter++;
        rep(j, y) iterR++;
        tmp = *iter;
        *iter = *iterR;
        *iterR = tmp;
        break;
      case 2:
        iter = l.end();
        iter--;
        l.push_front(*iter);
        l.pop_back();
        break;
      case 3:
        rep(j, x) iter++;
        cout << *iter << endl;
        break;
    }
  }
}

int main(){
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int shifts = 0;
  rep(i, q) {
    int t, x ,y;
    cin >> t >> x >> y;
    x--, y--;
    switch(t) {
      case 1:
        swap(a[(x + shifts) % n], a[(y + shifts) % n]);
      case 2:
        shifts = (shifts + n - 1);
      case 3:
        cout << a[(x + shifts) % n] << endl;
    }
  }
  return 0;
}