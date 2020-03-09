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
    int q = 5;
    vector<vector<string>> ins(2,vector<string>(q));
    rep(i,q)ins[0][i] = " ";

    ins[0][2] = "string";
    rep(i,q){
        if(ins[0][i] != " ") cout <<"not null"<<endl;
        cout<<ins[0][i]<<endl;

    }

    return 0;
}

