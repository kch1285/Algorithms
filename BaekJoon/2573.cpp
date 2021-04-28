#include <iostream>
#include <string.h>

using namespace std;

int arr[301][301];
int tmp[301][301];
bool visit[301][301];

int n, m;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void gl_warming(){
    memset(tmp, 0, sizeof(tmp));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]){
                for(int k=0;k<4;k++){
                    int newX = i + dx[k];
                    int newY = j + dy[k];
                    if(arr[newX][newY] == 0){
                        tmp[i][j]--;
                    }
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j] = arr[i][j] + tmp[i][j];
            if(arr[i][j] < 0)   arr[i][j] = 0;
        }
    }
}

void dfs(int x, int y){
    visit[x][y] = true;
    for(int i=0;i<4;i++){
        int newX = x + dx[i];
        int newY = y + dy[i];
        if(0 <= newX && newX < n && 0 <= newY && newY < m){
            if(arr[newX][newY] != 0 && !visit[newX][newY]){
                dfs(newX, newY);
            }
        }
    }
}
int main(){
    int cnt, year = 0;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    while(1){
        memset(visit, false, sizeof(visit));
        cnt = 0;
        bool result = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j] != 0 && !visit[i][j]){
                    cnt++;
                    if(cnt == 2){
                        result = true;
                        break;
                    }
                    dfs(i, j);
                }
            }
        }
        if(result)  break;
        if(cnt == 0){
            year = 0;
            break;
        }
        gl_warming();
        year++;
    }
    cout << year << '\n';
    return 0;
}