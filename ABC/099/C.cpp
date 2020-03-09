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
    //貰う　DP
    int n;cin>>n;

    vector<ll> dp(n+1,LINF);

    dp[0] = 0;
    for(int i = 1;i<=n;i++){
        for(int pow6 = 1;pow6 <= i;pow6 *= 6){
            dp[i] = min(dp[i], dp[i - pow6] + 1);
        }
        for(int pow9 = 1;pow9 <= i;pow9 *= 9){
            dp[i] = min(dp[i], dp[i - pow9] + 1);
        }
    }
    cout << dp[n]<<endl;


    return 0;
}

