#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    int  n;
    bool ok = true;
 
    cin >>n;
 
    vector<long long> A(n);
 
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }
 
    for(int i = 0;i < n;i++){
        if(A[i] %2 == 0){
            if(!(A[i]%3 == 0 || A[i]%5==0)){
                ok = false;
            }
        }
 
    }
 
    if(ok){
        cout << "APPROVED"<<endl;
 
    }else{
        cout << "DENIED"<<endl;
    }
 
}
