#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare(const void *a, const void *b){
    return *(int *)b - *(int *)a;
}

int main(){
    int sum=0, t=0, k=0, x=0, tmp, num=0, dec=1, arr[100001];
    char n[100001];
    scanf("%s", n);
    x = strlen(n);
    tmp = x;
    while(tmp>0){
        num = num+((int)n[tmp-1]-48)*dec;
        sum = sum+(int)n[tmp-1]-48;
        tmp--;
        dec *=10;
    }
    tmp=x;
    for(int i=0;i<x;i++){
        arr[i] = n[i]-48;
        if(arr[i]==0)
            t=1;
    }
    if(sum % 3 == 0)
        k=1;
    if(t==1 && k==1){
        qsort(arr, x, sizeof(int), compare);
        for(int i=0;i<x;i++){
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    else
        printf("-1\n");
    return 0;
}