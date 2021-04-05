#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> danzi;
char arr[27][27];
int n, home;
bool visit[27][27];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};


void dfs(int x, int y){
    visit[x][y] = true;
    home++;
    for(int k=0;k<4;k++){
        int newX = x + dx[k];
        int newY = y + dy[k];
        if(0<=newX && newX < n && 0 <= newY && newY < n){
            if(arr[newX][newY] == '1' && !visit[newX][newY]){
                dfs(newX, newY);
            }
        }
    }
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == '1' && !visit[i][j]){
                home = 0;
                dfs(i, j);
                danzi.push_back(home);
            }
        }
    }
    sort(danzi.begin(), danzi.end());
    cout << danzi.size() << '\n';
    for(int i=0;i<danzi.size();i++){
        cout << danzi[i] << '\n';
    }
    return 0;
}