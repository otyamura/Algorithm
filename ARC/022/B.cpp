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
    //しゃくとり法
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];

    set<int> s;
    int ans = -1;
    int right = 0;
    for(int left = 0;left<n;left++){
        while(right<n && !(s.count(a[right]))){
            s.insert(a[right]);
            right++;
        }

        ans = max(ans,right-left);
        if(left==right) right++;
        else s.erase(a[left]);
    }

    cout<<ans<<endl;

}

