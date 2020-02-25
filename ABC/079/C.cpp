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
    //bit全探索
    string s;cin>>s;
    int n = s.size()-1;
    vector<int> a(n+1);
    rep(i,n+1) a[i]=s[i]-'0';//stringからint

    vector<string> op(n);
    for(int i = 0;i<(1<<n);i++){
        int sum = a[0];
        for(int j = 0;j<n;j++){
            if(i & (1<<j)){
                op[j]="+";
                sum+=a[j+1];
            }else{
                op[j]="-";
                sum-=a[j+1];
            }
        }
        if(sum==7) break;
    }

    rep(i,n){
        cout<<a[i]<<op[i];
    }
    cout<<a[n]<<"=7"<<endl;


}

