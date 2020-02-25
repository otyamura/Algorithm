#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep_1(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
const long long INF = 1LL<<60;


int main(){
    int n,k;
    while(cin >> n >>k){
        if(n==0) break;
        vector<ll> a(n);
        rep(i,n) cin >> a[i];
        vector<ll> v(n+1,0);
        rep(i,n) v[i+1] = a[i] +v[i];

        ll mx = -INF;
        rep(i,n-k){
            ll tmp = v[i+k]-v[i];
            mx = max(tmp,mx);
        }
        cout<<mx<<endl;
    }
}
