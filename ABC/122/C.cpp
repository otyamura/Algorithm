#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep_1(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

int main(){
    //累積和 
    int n,q;
    string t;
    cin >>n>>q>>t;
    vector<int> s(n+1);
    rep(i,n){
        if(t[i]=='A' && t[i+1] == 'C'){
            s[i+1]=1+s[i];
        }else{
            s[i+1] = s[i];
        }
    }
    rep(i,q){
        int l,r;cin>>l>>r;
        l--;r--;
        cout<< s[r]-s[l]<<endl;
    }



}

