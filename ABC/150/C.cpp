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
    //順列 順番
    int n;
    cin >> n;
    vector<int> p(n), q(n);

    rep(i,n)cin >> p[i],p[i]--;
    rep(i,n)cin >> q[i],q[i]--;

    map<vector<int>,int> ord;

    int iter = 0;
    vector<int> v(n);
    rep(i,n) v[i] = i; //nまでの順列の生成 1,2,.....,n
    do{
        ord[v] = iter++;//順番を入れる
    }while(next_permutation(all(v)));
    
    cout << abs(ord[p] - ord[q]) <<endl;
    return 0;
}

