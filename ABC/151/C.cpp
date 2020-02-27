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
    int n,m;cin>>n>>m;
    vector<bool> AC(n);
    vector<int> WA(n);

    int ac=0,wa=0;
    for(int i = 0;i<m;i++){
        int p;
        string m;
        cin >>p>>m;
        if(AC[p]) continue;
        if(m == "AC"){
            AC[p] = true;
            wa+=WA[p];
            ac++;
        }else{
            WA[p]++;
        }
    }

    cout << ac << " " << wa << endl;

}
