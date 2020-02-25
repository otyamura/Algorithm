#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main(){

    double n,k; cin >> n >> k;
    double ans = 0;

    for(double i=0;i<n;i++){
        double tmp = i+1.0;
        double count = 0.0;
        while(tmp<k){
            tmp *=2.0;
            count++;
        }
        ans += pow(1.0/2.0,count);
    }

    printf("%.12f\n",ans*1/n);

}
