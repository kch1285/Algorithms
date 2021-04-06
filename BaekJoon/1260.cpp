#include <iostream>
#include <vector>
#include <string.h>
#include <queue>
#include <algorithm>

using namespace std;

// vector<vector<int> > adj(1001);
vector<int> adj[1001];
bool visited[1001];

int n, m, v, a, b;

void dfs(int start){
    cout << start << ' ';
    visited[start] = true;
    for(int i=0;i<adj[start].size();i++){
        int tmp = adj[start][i];
        if(!visited[tmp])   dfs(tmp);
    }
}

void bfs(int start){
    queue<int> q;
    visited[start] = true;
    q.push(start);
    cout << start << ' ';
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i=0;i<adj[cur].size();i++){
            int tmp = adj[cur][i];
            if(!visited[tmp]){
                q.push(tmp);
                cout << tmp << ' ';
                visited[tmp] = true;
            }
        }
    }
}

int main(){
    cin >> n >> m >> v;
    for(int i=0;i<m;i++){
        int tmp, tmp2;
        cin >> tmp >> tmp2;
        adj[tmp].push_back(tmp2);
        adj[tmp2].push_back(tmp);
    }
    for(int i=1;i<=n;i++){
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(v);
    memset(visited, false, sizeof(visited));
    cout << '\n';
    bfs(v);
    cout << '\n';
}