#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep_1(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 101010;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main(){
    //累積和 素数 エラストテネスのふるい
    int mx = INF;
    vector<int> is_prime(mx,1);
    is_prime[0] = 0,is_prime[1] = 0;
    for(int i = 0;i < mx;i++){
        if(!is_prime[i]) continue;
        for(int j = i*2;j <mx;j+=i) is_prime[j] = 0;
    }

    vector<int> a(mx);
    rep(i,mx){
        if(i % 2 == 0) continue;
        if(is_prime[i] && is_prime[ (i+1) / 2 ] ) a[i] = 1;
    }

    vector<int> s(mx+1);
    rep(i,mx) s[i+1] = a[i] + s[i];

    int Q; cin >> Q;
    rep(i,Q){
        int l,r;
        cin >>l>>r;
        ++r;
        cout << s[r] - s[l] <<endl;
    }
    
}

