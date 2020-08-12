#include <stdio.h>

int dp[1001];

int main(){
    int n, arr[1001], k, result=-1, t, tmp=-1;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }
    dp[1] = arr[1];

    for(int i=2;i<=n;i++){
        if(arr[i] > arr[i-1]){
            k=1;
            while((i-k)>0){
                if(tmp < dp[i-k] && arr[i-k] < arr[i])
                    tmp = dp[i-k];
                k++;
            }
            dp[i] = tmp + arr[i];
        }
        else if(arr[i] == arr[i-1]){
            tmp = -1;
            k=1;
            while((i-k)>0){
                if(tmp < dp[i-k] && arr[i-k] < arr[i])
                    tmp = dp[i-k];
                k++;
            }
            dp[i] = tmp + arr[i];
        }
        else{
            k = 1;
            tmp = -1;
            while((i-k)>0){
                if(tmp < dp[i-k] && arr[i-k] < arr[i])
                    tmp = dp[i-k];
                k++;
            }
            if(tmp==-1) tmp = 0;
            dp[i] = tmp + arr[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(result < dp[i])
            result = dp[i];
    }
    printf("%d\n", result);
    return 0;
}