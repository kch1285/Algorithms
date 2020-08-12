#include <stdio.h>


char arr[51][51];

int main(){
    int n, m, min, tmp, result=1;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++){
        scanf("%s", arr[i]);
    }
    if(n>=m)
        min = m;
    else
        min = n;
    
    for(int k=0;k<min;k++){
        for(int i=0;i<n-k;i++){
            for(int j=0;j<m-k;j++){
                if(arr[i][j] == arr[i][j+k] && arr[i][j] == arr[i+k][j]
                && arr[i][j] == arr[i+k][j+k]){
                    tmp = (k+1) * (k+1);
                }
            }
        }
        if(tmp > result)
            result = tmp;
    }
    printf("%d\n", result);
    return 0;
}