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
    int n,k,m;cin>>n>>k>>m;

    vector<float> a(n);
    rep(i,n-1)cin>>a[i];

    int sum = 0;
    rep(i,n-1)sum+=a[i];

    int ans = -1;

    for(int i = 0;i<=k;i++){
        int tmp = sum + i;
        float ave = (float)tmp/n;
        if(ave >= m){
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}