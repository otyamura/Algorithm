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

void printArray(vector<int> a, int index) {
  rep(i,a.size()-1) {
    if (i == index) cout << "[" << a[i] << "]" << " ";
    else cout << a[i] << " ";
  }
  cout << a[a.size()-1] << endl;
}

int partition (vector<int> &a, int low, int high) {
  int pivot = a[high];
  int i = low - 1;
  for (int j = low;j < high;j++) {
    if (a[j] <= pivot) {
      i++;
      swap(a[i],a[j]);
    }
  }
  swap(a[i + 1], a[high]);
  return i + 1;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int index = partition(a, 0, n - 1);
  printArray(a, index);
  return 0;
}
