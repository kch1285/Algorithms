#include <iostream>

using namespace std;

int arr[1025][1025];
int dp[1025][1025];

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, x1, y1, x2, y2;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> arr[i][j];
        }
    }
    dp[1][1] = arr[1][1];

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dp[i][j] = arr[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }
    for(int i=0;i<m;i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1] << '\n';
    }
    return 0;
}