#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    int n;
    cin >>n;
    int count = 0;
    //map　辞書順 
    map<string,int> m;

    int mx=0;
    rep(i,n){
        string s; cin >>s;
        m[s]++;
        mx = max(m[s],mx); 
    }

    for(auto x :m){
        if(x.second == mx) cout << x.first <<endl;
    }

}

