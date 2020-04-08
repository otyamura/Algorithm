#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main()
{
  int k;
  cin >> k;
  vector<ll> lun;
  if(k < 10){
    cout << k << endl;
    return 0;
  }
  rep_2(i,1,10)lun.emplace_back(i);
  ll tmp = 500;

  for(int i = 11; i < 100; i+=11) {
    lun.emplace_back(i-1);
    lun.emplace_back(i);
    lun.emplace_back(i+1);
  }

  for(int i = 100; i < 1000; i+=100){
    lun.emplace_back(lun[])
  }


  int count = 0;
  for(int x : lun) {

    cout <<count << ": "<<x <<endl;
    count++;
  }
  cout << endl;

  return 0;
}