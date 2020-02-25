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
    //bit全探索
    int n;cin>>n;
    vector<int> t(n);
    rep(i,n) cin>>t[i];

    int dif = INF;
    int ans = 0;
    for(int i = 0;i < (1<<n);i++){
        int sm1=0,sm2=0;
        for(int j = 0;j < n;j++){
            if(i & (1<<j)){
                sm1+=t[j];
            }else{
                sm2+=t[j];
            }
        }
        if(dif>abs(sm1-sm2)){
            dif=abs(sm1-sm2);
            ans = max(sm1,sm2);
        }
    }
    cout << ans <<endl;


}

