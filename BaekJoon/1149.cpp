#include <iostream>

using namespace std;


int dp[1000][3];
int arr[1000][3];

int main(){
    int n;
    int result;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        dp[0][i] = arr[0][i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            dp[i][j] = 10000000;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(j!=k){
                    if(dp[i][j] > dp[i-1][k] + arr[i][j]){
                        dp[i][j] = dp[i-1][k] + arr[i][j];
                    }
                }
                    
            }
            
        }
    }
    result = dp[n-1][0];

    for(int i=1;i<3;i++){
        if(result > dp[n-1][i]) result = dp[n-1][i];
    }
    cout << result << '\n';
}