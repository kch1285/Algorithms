#include <stdio.h>

long long dp[101][11];

int main(){
    int n;
    long long result = 0;
    scanf("%d", &n);
    for(int i=1;i<10;i++){
        dp[1][i] = 1;
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<10;j++){
            if(j==0){
                dp[i][j] = dp[i-1][j+1]%1000000000;
            }
            else if(j==9){
                dp[i][j] = dp[i-1][j-1]%1000000000;
            }
            else{
                dp[i][j] = dp[i-1][j-1]%1000000000 + dp[i-1][j+1] % 1000000000;
            }
        }
    }
    for(int i=0;i<10;i++){
        result += dp[n][i];
        result = result%1000000000;
    }
    printf("%lld\n", result%1000000000);
}