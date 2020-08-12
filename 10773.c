#include <stdio.h>
#include <stdlib.h>


int main(){
    int k, *arr, sum=0, j;
    scanf("%d", &k);
    arr = (int*)malloc(sizeof(int)*k);
    for(int i=0;i<k;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<k;i++){
        if(arr[i]!=0){
            sum += arr[i];
        }
        else{
            j = i;
            while(arr[j]==0){
                j--;
            }
            sum -= arr[j];
            arr[j]=0;
        }
    }
    printf("%d\n", sum);
    free(arr);
    return 0;
}