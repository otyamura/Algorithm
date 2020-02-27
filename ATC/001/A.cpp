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

//四方向への移動ベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int H,W;
vector<string> field;

// 探索
bool seen[510][510]; //seen[h][w] := マス(h,w)が検知済みかどうか
void dfs(int h,int w){
    seen[h][w] = true;
    
    //四方向を探索
    for(int dir = 0;dir < 4;++dir){
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        //場外に行ったり、移動先が壁の場合はスルー
        if( nh < 0 || nh >= H || nw < 0 || nw >= W ) continue;
        if(field[nh][nw] == '#')continue;

        // 移動先が探索済みの場合
        if ( seen[nh][nw] ) continue; 

        //再帰的に探索
        dfs(nh,nw);
    }
}

int main(){
    //深さ優先探索
    //入力受け取り
    cin >> H >> W;
    field.resize(H);

    for(int h = 0;h < H;++h) cin >> field[h];

    //sとgのますを特定する
    int sh, sw, gh, gw;
    for(int h = 0; h < H; ++h){
        for(int w = 0; w < W; ++w){
            if(field[h][w] == 's') sh = h, sw = w;
            if(field[h][w] == 'g') gh = h, gw = w;
        }
    }

    memset(seen, 0,sizeof(seen));// seen　配列全体をfalseに初期化
    dfs(sh, sw);

    //結果
    if ( seen[gh][gw] ) cout << "Yes" <<endl;
    else cout << "No" << endl;
}

