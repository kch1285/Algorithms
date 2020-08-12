#include <stdio.h>


int main(){
    int n, m, max, miro[1001][1001], memo[1001][1001];
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d", &miro[i][j]);
        }
    }
    memo[1][1] = miro[1][1];
    for(int i=2;i<=m;i++){
        memo[1][i] = memo[1][i-1] + miro[1][i];
    }
    for(int i=2;i<=n;i++){
        memo[i][1] = memo[i-1][1] + miro[i][1];
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            max = memo[i-1][j-1];
            if(max < memo[i-1][j])
                max = memo[i-1][j];
            if(max < memo[i][j-1])
                max = memo[i][j-1];
            memo[i][j] = max + miro[i][j];
        }
    }

    printf("%d\n", memo[n][m]);
    return 0;
}