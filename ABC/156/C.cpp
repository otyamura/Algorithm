#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    int mx = -1;
    rep(i,n){
        cin >>a[i];
        mx = max(a[i],mx);
    }
    int mn = 9999999;
    for(int i = 0;i <= mx;i++){
        int sum = 0;
        for(int j = 0; j<n;j++){
           int tmp = pow(a[j]-i, 2); 
           sum += tmp;
        }
        //cout<<sum<<endl;
        mn = min(sum,mn);
    }
    cout <<mn<<endl;

}
