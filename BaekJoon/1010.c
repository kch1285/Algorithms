#include <stdio.h>


unsigned long long dp[50][50];

/*unsigned long long d(int x, int y){
    int k;
    for(int i=1;i<=y;i++){
        dp[1][i] = i;
        dp[i][i] = 1;
    }
    for(int i=2;i<=x;i++){
        for(int j=i+1;j<=y;j++){
            k=j-1;
           while(k>=i-1){
                dp[i][j] += dp[i-1][k];
                k--;
           }
        }
    }
    return dp[x][y];
}*/

int main(){
    int n, m, t, k;
    scanf("%d", &t);

    for(int i=1;i<=30;i++){
        dp[1][i] = i;
        dp[i][i] = 1;
    }
    for(int i=2;i<=30;i++){
        for(int j=i+1;j<=30;j++){
            k=j-1;
           while(k>=i-1){
                dp[i][j] += dp[i-1][k];
                k--;
           }
        }
    }
    for(int i=0;i<t;i++){
        scanf("%d %d", &n, &m);
        printf("%lld\n", dp[n][m]);
    }
    return 0;
}