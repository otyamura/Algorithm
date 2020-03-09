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
    int a,b,m;cin>>a>>b>>m;
    vector<int> A(a),B(b);

    int mna = INF;
    rep(i,a){
        cin>>A[i];
        mna = min(mna,A[i]);
    }
    int mnb = INF;
    rep(i,b){
        cin>>B[i];
        mnb = min(mnb,B[i]);
    }
    int ans = mna + mnb;

    rep(i,m){
        int x,y,c;cin>>x>>y>>c;
        x--;
        y--;
        ans = min (ans,A[x] + B[y] - c);
    }

    cout << ans <<endl;


    return 0;
}

