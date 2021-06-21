#include <iostream>
#include <string>
#include <queue>

using namespace std;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};

int adj[101][101];
int d[101][101];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        string input;
        cin >> input;
        for(int j=0;j<n;j++){
            adj[i][j] = input[j] - '0';
            d[i][j] = 987654321;
        }
    }

    queue<pair<int, int> > q;
    q.push(make_pair(0, 0));
    d[0][0] = 0;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;

        q.pop();
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= m || ny < 0 || ny >= n)  continue;

            if(adj[nx][ny] == 1){
                if(d[nx][ny] > d[x][y] + 1){
                    d[nx][ny] = d[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
            else{
                if(d[nx][ny] > d[x][y]){
                    d[nx][ny] = d[x][y];
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }

    cout << d[m-1][n-1] << '\n';
    return 0;
}