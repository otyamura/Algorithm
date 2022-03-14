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


vector<long long> prime_factors(long long N) {
	long long rem = N;
	vector<long long> p;
	for (long long i = 2; i * i <= N; i++) {
		while (rem % i == 0) {
			rem /= i;
			p.push_back(i);
		}
	}
	if (rem != 1LL) p.push_back(rem);
	return p;
}

int main(){
  ll N;
  cin >> N;

	int Answer = 0;
	vector<long long> vec = prime_factors(N);
	for (int i = 0; i <= 20; i++) {
		if ((1 << i) >= (int)vec.size()) { Answer = i; break; }
	}
	cout << Answer << endl;

  return 0;
}