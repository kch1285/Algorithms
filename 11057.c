#include <stdio.h>


unsigned long long dp[1001][10];

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<10;i++){
        dp[0][i] = 1;
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<10;j++){
            dp[i][j] = dp[i-1][j]%10007 + dp[i][j-1]%10007;
        }
    }
    printf("%lld\n", dp[n][9]%10007);
    return 0;
}