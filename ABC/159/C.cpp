#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main()
{
    double l;cin>>l;
    double div = l / 3.0;
    double ans = div*div*div;
    printf("%.12f\n",ans);
    int L = 3;
    double u = (double)L/3;
    printf("%.12f\n",u);
    return 0;
}