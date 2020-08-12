#include <stdio.h>

int arr[1002][1002];

int dp(int x, int y){
    if(y!=0){
        for(int i=1;i<=x;i++){
            arr[i][1] = i;
            arr[i][i] = 1;
        }
        for(int i=3;i<=x;i++){
            for(int j=2;j<=y;j++){
                arr[i][j] = arr[i-1][j]%10007 + arr[i-1][j-1]%10007;
            }
        }
    return arr[x][y]%10007;
    }
    else
        return 1;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", dp(n, k)%10007);
    return 0;
}