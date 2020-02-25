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
    ll k;
    cin>>n>>k;
    vector<ll> a(n);

    rep(i,n) cin>> a[i];

    rep(i,n){
        if(a[i] == 0){
            cout << n <<endl;
            return 0;
        }
    }

    //しゃくとり法

    int ans = 0;
    int right = 0;
    ll mul = 1;
    for(int left = 0;left<n;left++){
        while(right<n && mul * a[right] <= k){
            mul *= a[right];
            right++;
        }

        ans = max(ans,right - left);

        if(left==right) right++;
        else mul/=a[left];

    }

    cout << ans <<endl;

}
