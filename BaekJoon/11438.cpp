#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int depth[100001];
int ancestor[100001][20];
vector <int> adj[100001];
int max_level, n, m, v1, v2;

void makeTree(int here, int parent){
    depth[here] = depth[parent] + 1;
    ancestor[here][0] = parent;

    for(int i=1;i<=max_level;i++)
        ancestor[here][i] = ancestor[ancestor[here][i-1]][i-1];
    
    for(int i=0;i<adj[here].size();i++){
        if(adj[here][i] != parent)  makeTree(adj[here][i], here);
    }
}

int lca(int a, int b){
    if(depth[a] != depth[b]){
        if(depth[a] > depth[b]){
            int tmp = a;
            a = b;
            b = tmp;
        }

        for(int i=max_level;i>=0;i--){
            if(depth[a] <= depth[ancestor[b][i]])   b = ancestor[b][i];
        }
    }
    int result = a;

    if(a != b){
        for(int i=max_level;i>=0;i--){
            if(ancestor[a][i] != ancestor[b][i]){
                a = ancestor[a][i];
                b = ancestor[b][i];
            }
            result = ancestor[a][i];
        }
    }
    return result;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> n;
    for(int i=0;i<n-1;i++){
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    max_level = (int)floor(log2(n));
    depth[0] = -1;
    makeTree(1, 0);

    cin >> m;
    for(int i=0;i<m;i++){
        cin >> v1 >> v2;
        int ans = lca(v1, v2);
        cout << ans << '\n';
    }
    return 0;
}