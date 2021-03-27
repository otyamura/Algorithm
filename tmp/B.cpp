#include <bits/stdc++.h>
using namespace std;

// 再帰関数
int recursionSum(int n) {
  // n==1で止める
  if (n == 1) return n;
  // 0~引数の値までを足した値をint型で返す
  return n + recursionSum(n - 1);
}

// main関数
int main() {
  // 1~100までなので100を引数にする
  cout << recursionSum(100) << endl;
  return 0;
}