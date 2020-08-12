#include <stdio.h>


int arr[1001];
int dp[1001];

int main(){
    int n, result;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i] != 0){
            for(int j=1;j<=arr[i];j++){
                if(dp[i+j] == 0){
                    dp[i+j] = dp[i] + 1;
                }
                else{
                    if(dp[i+j] > dp[i] + 1){
                        dp[i+j] = dp[i] + 1;
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ", dp[i]);
    }
    if(dp[n] == 0 || arr[]){
        result = -1;
    }
    else{
        result = dp[n];
    }
    printf("%d\n", result);
    return 0;
}