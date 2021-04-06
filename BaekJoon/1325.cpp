#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector <int> arr[10001];
int result[10001];

int n, m;
bool visit[10001];
int cnt = 0;
int maxi = 0;

void dfs(int start){
    if(maxi < cnt)   maxi = cnt;
    visit[start] = true;
    for(int i=0;i<arr[start].size();i++){
        if(!visit[arr[start][i]]){
            cnt++;
            dfs(arr[start][i]);
            //visit[arr[start][i]] = false;
        }
    }
}

int main(){
    int a, b;
    cin >> n >> m;

    for(int i=0;i<m;i++){
        cin >> a >> b;
        arr[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        memset(visit, false, sizeof(visit));
        cnt = 0;
        dfs(i);
        result[i] = cnt;
    }
    
    for(int i=1;i<=n;i++){
        if(maxi == result[i])    cout << i << ' ';
    }
    cout << '\n';
    return 0;
}