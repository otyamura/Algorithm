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
    vector<int> a(n,-1);
    bool ok = true;
    rep(i,m){
        int tmp;cin>>tmp;
        int c;cin>>c;
        if(a[tmp-1]!=-1 && a[tmp-1] != c)  {
            ok = false;
            break;
        }
        else a[tmp-1] = c;
    }

    if(n != 1 && a[0] == -1 ) a[0] = 1;
    else if(n == 1&& a[0] == -1) a[0] = 0;
    if(n != 1 && a[0] == 0) ok = false;

    rep(i,n){
        if(a[i] == -1) a[i] =0;
    }
    int ans = 0;
    int mul = 0;
    if(ok){
        rep(i,n){
            cout << a[i];
        }
        cout << endl;

    }else{
        cout <<"-1"<<endl;
    }


}

