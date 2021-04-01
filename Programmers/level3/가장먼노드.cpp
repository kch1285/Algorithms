#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

bool check[20001];
int dist[20001];

void bfs(int start, vector<vector<int>> graph){
    queue<int> q;
    dist[start] = 0;
    q.push(start);
    check[start] = true;
    
    while(!q.empty()){
        int from = q.front();
        q.pop();
        for(int i=0;i<graph[from].size();i++){
            int to = graph[from][i];
            if(!check[to]){
                q.push(to);
                check[to] = true;
                dist[to] = dist[from] + 1;
            }
        }
    }
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    int tmp = 0;
    vector<vector<int>> graph(n + 1,vector <int>());
    
    for(int i=0;i<edge.size();i++){
        graph[edge[i][0]].push_back(edge[i][1]);
        graph[edge[i][1]].push_back(edge[i][0]);
    }
    
    bfs(1, graph);
    for(int i=1;i<=n;i++){
        tmp = max(tmp, dist[i]);
    }
    for(int i=1;i<=n;i++){
        if(dist[i] == tmp)  answer++;
    }
    return answer;
}