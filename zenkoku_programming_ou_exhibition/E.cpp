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

    int n;cin>>n;
    vector<string> a = {"a", "b", "c", "d", "e"};
    for(int i = 1;i <=n ;i++){
        bool ok = false;
        string tmp;
        for(int j = 0;j<5;j++){
            if(i % (j+2) == 0){
                ok = true;
                tmp += a[j];
            }
        }
        if(ok) cout<< tmp <<endl;
        else cout <<i <<endl;
    }


    return 0;
}

