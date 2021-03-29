#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string board[51];

string whiteFirst[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};

string blackFirst[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

int func1(int x, int y){
    int cnt = 0;
    for(int i=x;i<x+8;i++){
        for(int j=y;j<y+8;j++){
            if(board[i][j] != whiteFirst[i-x][j-y]) cnt++;
        }
    }
    return cnt;
}

int func2(int x, int y){
    int cnt = 0;
    for(int i=x;i<x+8;i++){
        for(int j=y;j<y+8;j++){
            if(board[i][j] != blackFirst[i-x][j-y]) cnt++;
        }
    }
    return cnt;
}

int main(){
    cin.tie(NULL);
    int n, m, ans = 65;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> board[i];
    }

    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            ans = min(ans, min(func1(i, j), func2(i, j)));
        }
    }
    cout << ans << '\n';
    return 0;
}