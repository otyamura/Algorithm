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
    int d,g;cin>>d>>g;
    vector<pair<int,int>> p(d);
    rep(i,d) cin>>p[i].first >> p[i].second;

    ll ans = LINF;
    for(int i = 0;i<(1<<d);i++){
        ll tmp = 0;
        ll num = 0;
        for(int j = 0;j<d;j++){
            if(i&(1<<j)){
                tmp += p[j].second + p[j].first*100*(j+1);
                num+=p[j].first;
            }
        }
        if(tmp>=g){
            ans = min(ans,num);
        }else{
            //中途半端に解く奴
            for(int j=d-1;j >= 0;j--){
                if(i &(1<<j)) continue;
                for(int k=0;k<p[j].first;k++){
                    if(tmp>=g) break;
                    tmp+=100*(j+1);
                    num++;
                }
            }
            ans = min(ans,num);
        }
    }
    cout << ans<<endl;

}

