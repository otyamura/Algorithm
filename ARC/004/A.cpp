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
    //距離
    int n;cin>>n;
    vector<pair<int,int>> p(n);
    rep(i,n) cin>>p[i].first>>p[i].second;

    double ans = -1;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            double tmp = pow(p[i].first-p[j].first,2) + pow(p[i].second-p[j].second,2);
            tmp = sqrt(tmp);
            ans = max(ans,tmp);
        }
    }
    cout<<ans<<endl;
}
