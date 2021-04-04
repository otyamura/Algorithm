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

void printArray(vector<int> a) {
  rep(i,a.size()-1) {
    cout << a[i] << " ";
  }
  cout << a[a.size()-1] << endl;
}

void selectionSort(vector<int> a, int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    int mn = INF;
    int index = -1;
    for (int j = i; j < n; j++) {
      if (mn > a[j]) {
        mn = a[j];
        index = j;
      }
    }
    if (i != index) count++;
    swap(a[i], a[index]);
  }
  printArray(a);
  cout << count << endl;
}


int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  selectionSort(a, n);
  return 0;
}
