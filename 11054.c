#include <stdio.h>

int a[1001], dp[1001], rp[1001], ans[1001];

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
    for(int i=n;i>=1;i--){
        for(int j=n+1;j>=i-1;j--){
            if(a[i]>a[j] && rp[i]<rp[j]+1){
                rp[i] = rp[j] + 1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ", rp[i]);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        ans[i] = rp[i] + dp[i];
    }
    max = ans[1];
    for(int i=2;i<=n;i++){
        if(ans[i]>max){
            max = ans[i];
        }
    }
    printf("%d\n", max-1);
    return 0;
}