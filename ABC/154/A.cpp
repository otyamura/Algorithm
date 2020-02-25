#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    string s,t,u;
    int a,b;
 
    
	cin >> s >> t;
    cin >> a >> b;
    cin >> u;
	
    if(s == u){
        a--;
    }else if(t == u) {
        b--;
    }
 
    
	cout << a << " " << b <<endl;	

}

