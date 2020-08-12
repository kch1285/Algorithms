#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, t, *arr, i=0, cnt=0;
    scanf("%d %d", &n, &t);
    arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    while(t>=arr[i] && i<n){
        cnt++;
        t-=arr[i];
        i++;
        if(t<=0)
            break;
    }
    printf("%d\n", cnt);
    free(arr);
    return 0;
}