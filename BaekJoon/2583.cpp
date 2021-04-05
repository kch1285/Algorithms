#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[101][101];
bool visit[101][101];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int n, m, k, cnt;

void dfs(int x, int y){
    visit[x][y] = true;
    cnt++;
    for(int i=0;i<4;i++){
        int newX = x + dx[i];
        int newY = y + dy[i];

        if(0 <= newX && newX < n && 0 <= newY && newY < m){
            if(arr[newX][newY] == 0 && !visit[newX][newY]){
                dfs(newX, newY);
            }
        }
    }
}
int main(){
    int x1, x2, y1, y2;
    vector <int> result;

    cin >> n >> m >> k;
    for(int i=0;i<k;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int y=y1;y<y2;y++){
            for(int x=x1;x<x2;x++){
                arr[y][x] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == 0 && !visit[i][j]){
                cnt = 0;
                dfs(i, j);
                result.push_back(cnt);
            }
        }
    }

    cout << result.size() << '\n';
    sort(result.begin(), result.end());

    for(int i=0;i<result.size();i++){
        cout << result[i] << ' ';
    }
    cout << '\n';
    return 0;
}