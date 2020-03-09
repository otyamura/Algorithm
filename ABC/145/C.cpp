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

vector<int> x(10),y(10);
double distance(int i, int j) {
    double dx = x[i] - x[j];
    double dy = y[i] - y[j];
    return pow ( dx*dx+dy*dy,0.5 );
}
int main(){
    int n;cin>>n;
    for(int i = 1;i <= n;i++){
        cin >> x[i] >> y[i];
    }
    // 順番の配列を0~n-1番まで作成
    vector<int> v(n);
    rep(i,n){
        v[i] = i + 1;
    }

    //階乗の計算
    int cnt = 1;
    for(int i = 1;i <= n;i++){
        cnt *= i;
    }
    //今いる街v[i]から、次の街v[i+1]までの距離を求め総和を計算
    double sum = 0;
    do {
        for(int i = 0;i < n-1;i++){
            sum += distance(v[i],v[i+1]);
        }
    }while(next_permutation(all(v)));

    cout << sum/cnt<<endl;

}

