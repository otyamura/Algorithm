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
    int n,Y;cin>>n>>Y;

    rep_1(x,n){
        rep_1(y,n){
            int z = n-x-y;
            if(z>=0 && x*10000 + y*5000 + z*1000 == Y){
                cout << x<<" "<<y<<" "<<z<<endl;
                return 0;
            }
        }
    }
    cout <<"-1 -1 -1"<<endl;

}

