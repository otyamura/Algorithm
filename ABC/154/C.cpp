#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    int n;
    cin >>n;
    int count = 0;
    vector<int> A(n);
    rep(i,n){
        cin >> A[i];
    }
    map<int,int> m;
    bool ans = true;
    //map 単語　重複
    for(int x :A){
        if(m.count(x)){
            ans =false;
        }else{
            m[x]=1;
        }
    }
    if(ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

