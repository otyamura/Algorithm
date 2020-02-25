#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    // 区間　分割　
    int n,m;
    cin >> n>>m;
    vector<pair<int,int>> p(m);
    int mx=-1,mn=999999;
    rep(i,m){
        cin >> p[i].first >> p[i].second;
        mx=max(p[i].first,mx);
        mn=min(p[i].second,mn);
    }

    int count = 0;
    rep(i,n){
        if(mx<=i+1 && i+1<=mn) count++;
    }

    cout << count <<endl;


}

