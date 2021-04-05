#include <iostream>
#include <cstring>


using namespace std;

int arr[100001];
bool visit[100001];
bool check[100001];
int cnt = 0;

void dfs(int start){
    visit[start] = true;
    int team = arr[start];

    if(!visit[team])    dfs(team);
    else if(!check[team]){
        for(int i=team;i!=start;i=arr[i]){
            cnt++;
        }
        cnt++;
    }
    check[start] = true;
}

int main(){
    int n, t;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        memset(arr, 0, sizeof(arr));
        memset(visit, false, sizeof(visit));
        memset(check, false, sizeof(check));
        cnt = 0;
        for(int j=1;j<=n;j++){
            cin >> arr[j];
        }
        for(int j=1;j<=n;j++){
            if(!visit[j])   dfs(j);
        }
        cout << n-cnt << '\n';
    }
    return 0;
}