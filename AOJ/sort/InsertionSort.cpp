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

void printArray(vector<int> a) {
  rep(i,a.size()-1) {
    cout << a[i] << " ";
  }
  cout << a[a.size()-1] << endl;
}

void insertionSort(vector<int> a, int n) {
  printArray(a);
  for (int i = 1; i < n; i++) {
    // 一つ比較対象を決める
    int v = a[i];
    // 比較対象の前がソート済み
    int j = i - 1;
    // jが0以上でa[j]がvよりも大きければ前にしていく
    while (j >= 0 && a[j] > v) {
      a[j + 1] = a[j];
      // vとの比較対象を一つ下にする
      j--;
    }
    a[j + 1] = v;
    printArray(a);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  insertionSort(a, n);
  return 0;
}
