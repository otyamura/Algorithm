#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rep_1(i,n) for(int (i)=0;(i)<=(n);(i)++)
#define rep_2(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

const int STACK_SIZE = 100;

class Stack {
  private:
    int sp;
    int data[STACK_SIZE];
  public:
    void init();
    void push(const int item);
    int pop();
};

void Stack::init() {
  sp = 0;
}

void Stack::push(const int item) {
  if (sp < STACK_SIZE) {
    data[sp] = item;
    sp++;
  } else {
    cout << "too many items" << endl;
  }
}

int Stack::pop() {
  if (sp <= 0) {
    cout << "can not pop" << endl;
  }
  sp--;
  return data[sp];
}

int main(){
  Stack a;
  a.init();
  a.push(8);
  cout << a.pop() << endl;
  return 0;
}
