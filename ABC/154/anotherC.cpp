#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());
    bool flag = true;
    for(int i = 0; i < n;i++){
        if(a[i] == a[i+1]) flag = false;
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

