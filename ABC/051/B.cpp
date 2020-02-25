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
    //全探索
    int k,s;cin >> k >> s;

    int count = 0;
    rep_1(x,k){
        rep_1(y,k){
            int z = s-x-y;
            if(z>= 0 && z<=k)count++;
        }
    }
    cout << count <<endl;

}

