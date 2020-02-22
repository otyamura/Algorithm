#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int main(){
    int n;
    int digit=3;//桁数
    cout << "作りたいディレクトリの数を入力してください:";
    cin >> n;
    cout << endl;
    for(int i = 1;i <=n;i++){
        string tmp;  
        int digTmp = digit-(int)(log10(i)+1);  //桁数から今見てるiの桁数を引く
        while(digTmp>0){
            tmp += "0";
            digTmp--;
        }
        tmp += to_string(i);
        bool result = fs::create_directory(tmp);
    }
}
