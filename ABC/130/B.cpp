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
    int n,x;cin>>n>>x;
    vector<int> l(n);
    rep(i,n)cin>>l[i];

    vector<int> d(n+1);

    d[0] = 0;
    int count = 0;
    rep(i,n+1){
        if(d[i] > x) break;
        d[i+1] = d[i] + l[i];
        count ++;
    }
    cout <<count <<endl;

}

