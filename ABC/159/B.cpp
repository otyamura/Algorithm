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
    string s;cin>>s;
    bool ans = true;
    int iter = (s.size() - 1)/ 2;
    string first = s.substr(0,iter);
    iter = (s.size() + 3) / 2;
    iter--;
    string last = s.substr(iter, s.size());
    string tmp = s;
    reverse( all(tmp) );
    if(s != tmp) ans = false;
    tmp = first;
    reverse( all(tmp) );
    if(first != tmp) ans = false;
    tmp = last;
    reverse( all(tmp) );
    if(last != tmp) ans = false;

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}