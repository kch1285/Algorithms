#include <stdio.h>

int a[1001], dp[1001];

int main(){
    int n, max;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i-1;j++){
            if(a[i]>a[j] && dp[i]<dp[j]+1){
                dp[i] = dp[j] + 1;
            }
        }
    }
    max = dp[1];
    for(int i=2;i<=n;i++){
        if(dp[i]>max){
            max = dp[i];
        }
    }
    printf("%d\n", max);
    return 0;
}