#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    int n,k;
    cin >>n>>k;
    int tmp=0;
    int count = 0;
    while(n>0){
        n/=k;
        count++;
    }

    cout <<count<<endl;
}

