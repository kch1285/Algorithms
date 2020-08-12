#include <iostream>
#include <string.h>

using namespace std;

int adj[51][51];
bool visit[51][51];
int m, n;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};


void dfs(int a, int b){
    for(int i=0;i<4;i++){
        int newX = a + dx[i];
        int newY = b + dy[i];

        if(0 <= newX && newX < n && 0 <= newY && newY < m){
            if(adj[newX][newY] == 1){
                if(!visit[newX][newY]){
                    visit[newX][newY] = true;
                    dfs(newX, newY);
                }
            }
        }
    }
}
int main(){
    int t, k, x, y, bug;
    cin >> t;
    for(int i=0;i<t;i++){
        bug = 0;
        cin >> n >> m >> k;
        for(int j=0;j<k;j++){
            cin >> x >> y;
            adj[x][y] = 1;
        }

        for(int j=0;j<n;j++){
            for(int l=0;l<m;l++){
                if(adj[j][l] == 1 && !visit[j][l]){
                    dfs(j, l);
                    bug++;
                }
            }
        }
        memset(adj, 0, sizeof(adj));
        memset(visit, false, sizeof(visit));
        cout << bug << '\n';
    }
    return 0;
}