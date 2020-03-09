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
    int n,m,k;cin>>n>>m>>k;
    vector<vector <int>> a(n,vector<int>(n));

    rep(i,n) rep(j,n) a[i][j] = 0;
    int tmp = 1;
    while(tmp < n){
        for(int i = tmp;i<n;i++){
            a[tmp][i]=-1;
        }
        tmp++;
    }
    while(m>0){
        int c,d;cin>>a>>b;
        if(c>d)swap(c,d);
        a[c][d]=0;
        m--;
    }

    while(k>0){
        int c,d;cin>>a>>b;
        if(c>d)swap(c,d);
        a[c][d]=0;
        k--;
    }
    int ans = 0;
    rep(i,n){
        rep(j,n){
            if(a[i][j] == -1)
        }

    }


}

