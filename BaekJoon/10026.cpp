#include <iostream>
#include <string.h>

using namespace std;

char arr[101][101];
bool visit[101][101];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int n, cnt1 = 0, cnt2 = 0;

void dfs(int x, int y){
    for(int i=0;i<4;i++){
        int newX = x + dx[i];
        int newY = y + dy[i];
        if(0 <= newX && newX < n && 0 <= newY && newY < n){
            if(arr[x][y] == arr[newX][newY]){
                if(!visit[newX][newY]){
                    visit[newX][newY] = true;
                    dfs(newX, newY);
                }
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visit[i][j]){
                dfs(i, j);
                cnt1++;
            }
        }
    }

    memset(visit, false, sizeof(visit));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 'G'){
                arr[i][j] = 'R';
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!visit[i][j]){
                dfs(i, j);
                cnt2++;
            }
        }
    }

    cout << cnt1 << ' ' << cnt2 << '\n';
    return 0;
}