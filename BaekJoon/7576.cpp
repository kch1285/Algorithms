#include <iostream>
#include <queue>

using namespace std;


queue<pair<int, int> > q;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m, date = 0;

    cin >> m >> n;
    vector<vector<int> > tomato(n, vector<int>(m, 0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> tomato[i][j];
            if(tomato[i][j] == 1)   q.push(make_pair(i, j));
        }
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && tomato[nx][ny] == 0){
                tomato[nx][ny] = tomato[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tomato[i][j] == 0){
                cout << -1 << '\n';
                return 0;
            }
            if(date < tomato[i][j]) date = tomato[i][j];
        }
    }
    cout << date - 1 << '\n';
    return 0;
}