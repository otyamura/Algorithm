#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    long long n;
    bool ok = true;
 
    cin >>n;
 
    vector<string> A(n);
    vector<string> B(0);
 
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }
    int max =-1;
    int count = 0;
    int pos = 0;
    sort(A.begin(), A.end());
    int tmp =0;
 
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(A[i] == A[j]){
                count++;
                if(count > max){
                    max = count;
                    pos = i;
                }
            }else{
                break;
            }
            
        }
        i+=count;
        count=0;
    }
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(A[i] == A[j]){
                count++;
                if(count == max){
                    pos = i;
                    string a = A[pos];
                    B.push_back(a);
                }
            }else{
                break;
            }
            
        }
        i+=count;
        count=0;
    }
    //B.erase(unique(B.begin(), B.end()), B.end());
 
    if(max == -1){
    for(int i = 0;i < A.size();i++){
        cout << A[i] <<endl;
    }
 
    }else{
    for(int i = 0;i < B.size();i++){
        cout << B[i] <<endl;
    }
 
    }

}

