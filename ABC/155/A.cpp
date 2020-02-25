#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    int a,b,c;
    bool ok = false;
 
    
	cin >> a>>b>>c;
 
    if(a==b){ 
        ok = true;
    }
    if(a==c){
        ok = true;
    }
    if(b==c){
        ok = true;
    }
    if(a==b &&b ==c){
    ok = false;
 
    }
    
    if(ok){
    cout <<"Yes" <<endl;
    }else{
    cout <<"No" <<endl;
        
    }

}

