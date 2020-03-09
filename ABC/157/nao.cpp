#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){
    int N,M;
    bool J = false;
    bool gomi = false;
    cin >> N >> M;
    vector<int> s(M);
    vector<int> c(M);
    vector<int> ans(N,0);
    for(int i = 0;i < M;i++){
        cin >> s.at(i) >> c.at(i);
    }

    if(M == 0){
        if(N == 1){
            cout << 0 << endl;
        }else if(N == 2){
            cout << 10 << endl;
        }else{
            cout << 100 << endl;
        }
    }else{
        for(int i = 0;i < M;i++){
            for(int j = i;j < M;j++){
                if(s.at(i)==s.at(j)){
                    if(c.at(i) != c.at(j)){
                        J = false;
                        gomi = true;
                        break;
                    
                    }
                }
            }
            if(gomi){
                break;
            }
        }
        if(gomi){
            cout << -1 << endl;
        }else{
            for(int i = 0;i < M;i++){
                if(s.at(i) == 1 && c.at(i) == 0){
                    J = false;
                    break;
                }else{
                    ans.at(s.at(i)-1) = c.at(i);
                    J = true;
                }
            }
            if(N != 1 && ans.at(0) == 0){
                J = false;
            }
            if(!(gomi)&&J){
                for(int i = 0;i<N;i++){
                cout << ans.at(i);
                if(i == N-1){
                    cout << endl;
                }
                }
            }else{
                cout << -1 << endl;
            }
        }
        
    }
    
}
    
