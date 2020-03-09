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
    vector<vector <int>> a(3,vector<int>(3));
    rep(i,3) rep(j,3)cin>>a[i][j];

    int n;cin>>n;
    rep(i,n){
        int tmp; cin>>tmp;
        rep(j,3)rep(k,3)if(a[j][k] == tmp) a[j][k] = -1;
    }
    bool ok = false;
    if(a[0][0]==-1&&a[0][1]==-1&&a[0][2]==-1) ok = true;
    if(a[1][0]==-1&&a[1][1]==-1&&a[1][2]==-1) ok = true;
    if(a[2][0]==-1&&a[2][1]==-1&&a[2][2]==-1) ok = true;
    if(a[0][0]==-1&&a[1][1]==-1&&a[2][2]==-1) ok = true;
    if(a[2][0]==-1&&a[1][1]==-1&&a[0][2]==-1) ok = true;
    if(a[0][0]==-1&&a[1][0]==-1&&a[2][0]==-1) ok = true;
    if(a[0][1]==-1&&a[1][1]==-1&&a[2][1]==-1) ok = true;
    if(a[0][2]==-1&&a[1][2]==-1&&a[2][2]==-1) ok = true;


    if(ok)cout <<"Yes"<<endl;
    else cout <<"No"<<endl;


}

