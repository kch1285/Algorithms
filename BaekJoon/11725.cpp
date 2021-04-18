#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool visit[100001];
vector<int> result;

void dfs(int start, vector<int> tree[]){
    visit[start] = true;

    for(int i=0;i<tree[start].size();i++){
        int next = tree[start][i];
        if(!visit[next]){
            dfs(next, tree);
        }
        else{
            result[start] = next;
        }
    }
}

int main(){
    int n, parent, child;
    cin >> n;

    vector<int> tree[n + 1];
    for(int i=0;i<n - 1;i++){
        result.push_back(0);
        cin >> parent >> child;

        tree[parent].push_back(child);
        tree[child].push_back(parent);
    }
    result.push_back(0);
    dfs(1, tree);
    for(int i=2;i<=n;i++){
        cout << result[i] << '\n';
    }
    return 0;
}