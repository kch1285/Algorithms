#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    int n, arr[9], result[9], x, y,tmp=1, p, max=0, sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    x=0;
    y=n-1;
    while(x<=y){
        if(tmp%2==1){
            result[tmp-1] = arr[x];
            x++;
        }
        else{
            result[tmp-1] = arr[y];
            y--;
        }
        tmp++;
    }
    tmp = 0;
    while(tmp < n){
        p = result[n-1];
        for(int i=n-1;i>0;i--){
            result[i] = result[i-1];
        }
        result[0] = p;
        for(int i=0;i<n-1;i++){
            sum = sum + abs(result[i]-result[i+1]);
        }
        if(sum >=max)
            max = sum;
        sum = 0;
        tmp++;
    }
    printf("%d\n", max);
    return 0;
}