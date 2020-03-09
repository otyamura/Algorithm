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

int n,m;
vector<int>s,c;

bool ok(string str){
    if(str.size() != n) return false;
    rep(i,m) if(str[s[i]] != (char)(c[i] + '0')) return false;
    return true;
}

string solve() {
    for(int i = 0;i <= 999;i++){
        stringstream iss; iss << i;
        string str = iss.str();
        if(ok(str)) return str;
    }
    return "-1";
}
int main(){
    cin >> n>>m;
    s.resize(m);c.resize(m);
    rep(i,m)cin >>s[i]>>c[i],s[i]--;
    cout << solve() <<endl;
}

