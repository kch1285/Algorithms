#include <iostream>
#include <string.h>

using namespace std;

int arr[101][101];
bool visit[101][101];
int n, high = 0, height;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void dfs(int x, int y){

    for(int i=0;i<4;i++){
        int newX = x + dx[i];
        int newY = y + dy[i];

        if(0 <= newX && newX < n && 0 <= newY && newY < n){
            if(!visit[newX][newY] && arr[newX][newY] > height){
                visit[newX][newY] = true;
                dfs(newX, newY);
            }
        }
    }
}
int main(){
    int max = 0, cnt;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
            if(high < arr[i][j])    high = arr[i][j];
        }
    }

    for(int i=0;i<=high;i++){
        cnt = 0;
        memset(visit, false, sizeof(visit));
        height = i;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(!visit[j][k] && arr[j][k] > i){
                    cnt++; 
                    dfs(j, k);
                    
                    if(cnt > max)   max = cnt;
                }
            }
        }
    }

    cout << max << '\n';
    return 0;
}