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

void bubbleSort(vector<int> a, int n) {
  int count = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (a[j] > a[j + 1]) {
        count++;
        swap(a[j], a[j + 1]);
      }
    }
  }
  printArray(a);
  cout << count << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bubbleSort(a, n);
  return 0;
}
