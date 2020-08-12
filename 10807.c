#include <stdio.h>

int arr[101];

int main(){
    int n, cnt=0, v;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for(int i=0;i<n;i++){
        if(v==arr[i])
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}