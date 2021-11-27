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
  vector<int> A(n), B(n), C(n);
  rep(i, n){
    cin >> A[i];
  }
  rep(i, n){
    cin >> B[i];
  }
  rep(i, n){
    cin >> C[i];
    C[i]--;
  }
  int count = 0;
  rep(i, n) {
    rep(j, n) {
      if (A[i] == B[C[j]]) count++;
    }
  }

  cout << count << endl;
  return 0;
}
