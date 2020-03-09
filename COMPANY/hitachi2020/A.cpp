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
    string s;cin>>s;
    bool count = false;
    bool ans = true;
    for(char x:s){
        if(count) {
            if(x == 'i'){
                count = !count;
            }else{
                ans = false;
            }
        }else{
            if(x == 'h'){
                count = !count;
            }else{
                ans = false;
            }
        }
    }

    if(s.size()%2 == 1) ans = false;
    cout << (ans ? "Yes" : "No") <<endl;


    return 0;
}

