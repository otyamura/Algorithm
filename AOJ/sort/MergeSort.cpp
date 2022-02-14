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

int cnt = 0;

void printArray(vector<int> a) {
  rep(i,a.size()-1) {
    cout << a[i] << " ";
  }
  cout << a[a.size()-1] << endl;
}

void merge(vector<int> &a, int left, int middle, int right) {
  // 左と右の要素数
  int n1 = middle - left;
  int n2 = right - middle;

  vector<int> L(n1 + 1), R(n2 + 1);
  // copy
  for (int i = 0; i < n1; i++) {
    L[i] = a[left + i];
  }
  for (int i = 0; i < n2; i++) {
    R[i] = a[middle + i];
  }

  L[n1] = R[n2] = INF;

  int i = 0, j = 0;
  // copy left and right
  for (int k = left;k < right;k++) {
    cnt++;
    if (L[i] <= R[j]) {
      a[k] = L[i];
      i++;
    } else {
      a[k] = R[j];
      j++;
    }
  }
}

void mergeSort(vector<int> &a, int left, int right) {
  if (left + 1 < right) {
    int middle = left + (right - left) / 2;
    mergeSort(a, left, middle);
    mergeSort(a, middle, right);
    merge(a, left, middle, right);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  mergeSort(a, 0, n);
  printArray(a);
  cout << cnt << endl;
  return 0;
}
