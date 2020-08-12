#include <stdio.h>

int arr[101];

int main(){
    int n, m, a, b, k, tmp, x;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++){
        arr[i] = i;
    }
    for(int i=0;i<m;i++){
        scanf("%d %d", &a, &b);
        k = b-a;
        if(k%2==0){
            k = k/2-1;
        }
        else{
            k /= 2;
        }
        x = b;
        for(int j=a;j<=a+k;j++){
            tmp = arr[j];
            arr[j] = arr[x];
            arr[x] = tmp;
            x--;
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}