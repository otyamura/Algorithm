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
    ll h,w;cin>>h>>w;
    ll first = ceil( (float) h/2);
    ll second = floor(h/2);
    ll ans = 0;

    if(w%2 == 0){
        ans += first*w/2 + second *w/2;
    }else{
        ans += first*(w-1)/2 + second *(w-1)/2;
        ans += first;
    }

    cout << ans << endl;
    return 0;
}