#include <iostream>
#include <cstring>

using namespace std;

int n, cnt;
int arr[101];
bool visit[101];

void dfs(int start, int next){
    
    visit[next] = true;
    int tmp = arr[next];
    if(tmp == start){
        return;
    }
    if(!visit[tmp]){
        cnt++;
        dfs(start, tmp);
    }
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++){
       // memset(visit, false, sizeof(visit));
        cnt = 1;
        dfs(i, arr[i]);
        cout << i << ' ' << cnt << '\n';
    }
    return 0;
}