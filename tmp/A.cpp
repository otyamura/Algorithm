#include <bits/stdc++.h>
using namespace std;

int main() {
  // 5 * 5の市松模様を作成
  int n = 5;
  // 塗るか塗らないかを一回ずつ反転させるためbool型
  // 模様は*とスペースで作成
  bool ichi = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (ichi) {
        cout << "*";
      } else {
        cout << " ";
      }
      ichi = !ichi;
    }
    cout << endl;
  }
  return 0;
}