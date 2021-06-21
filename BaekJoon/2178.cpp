#include <iostream>
#include <queue>

using namespace std;

int adj[101][101];
int d[101][101];
bool visit[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};
int n, m;

void bfs(int a, int b){
    queue<pair<int, int> > q;
    visit[a][b] = true;
    d[a][b]++;
    q.push(make_pair(a, b));

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m || visit[nx][ny] || adj[nx][ny] == 0)  continue;
            
            visit[nx][ny] = true;
            q.push(make_pair(nx, ny));
            d[nx][ny] = d[x][y] + 1;
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        string input;
        cin >> input;
        for(int j=0;j<input.length();j++){
            adj[i][j] = input[j] - '0';
        }
    }
    bfs(0, 0);
    cout << d[n-1][m-1] << '\n';
    return 0;
}