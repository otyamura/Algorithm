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

int cnt = 0;

void printArray(vector<int> a) {
  rep(i, a.size()) { cout << a[i] << endl; }
}

void insertionSort(vector<int> &a, int n, int g) {
  for (int i = g; i < n; i++) {
    // 一つ比較対象を決める
    int v = a[i];
    // 比較対象の前がソート済み
    int j = i - g;
    // jが0以上でa[j]がvよりも大きければ前にしていく
    while (j >= 0 && a[j] > v) {
      a[j + g] = a[j];
      // vとの比較対象を一つ下にする
      j = j - g;
      cnt++;
    }
    a[j + g] = v;
  }
}

void shellSort(vector<int> a, int n) {
  vector<int> g;
  for (int i = n; i > 0; i /= 2) {
    g.push_back(i);
  }
  int m = g.size();
  cout << m << endl;
  for(int i = 0; i < m - 1; i++) cout << g[i] << " ";
  cout << g[m - 1] << endl;
  for (int i = 0; i < m; i++) {
    insertionSort(a, n, g[i]);
  }
  cout << cnt << endl;
  printArray(a);
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  shellSort(a, n);
  return 0;
}
