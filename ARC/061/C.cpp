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
    string s;cin>>s;

    int n = s.size() - 1;

    ll sum = 0;
    for(int i = 0;i < (1<<n);i++){
        int l = 0;//左端
        ll tmp = 0;

        int r= 0;
        for( r = 0;r<n;r++){  //右端
            if(i & (1<<r)){
                string t = s.substr(l,r-l+1);
                ll num = stoll(t);
                tmp += num;
                l = r+1;
            }
        } 

        string t = s.substr(l,r-l+1);
        ll num = stoll(t);
        tmp+=num;
        sum+=tmp;
    }

    cout<<sum<<endl;



}

