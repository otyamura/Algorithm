#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    int n,r;
    cin >>n>>r;
    if(n<10){
        int tmp = 100*(10-n)+r;
        cout << tmp<<endl;
    }else{
        cout <<r<<endl;
    }
}

