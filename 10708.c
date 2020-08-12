#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,m, *game, *arr, *score, x;
    scanf("%d", &n);
    scanf("%d", &m);
    game = (int*)malloc(sizeof(int)*m);
    arr = (int*)malloc(sizeof(int)*n);
    score = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        score[i]=0;
    }

    for(int i=0;i<m;i++){
        scanf("%d", &game[i]);
    }
    for(int i=0;i<m;i++){
        x=0;
        for(int j=0;j<n;j++){
            scanf("%d", &arr[j]);
        }
        for(int j=0;j<n;j++){
            if(arr[j] == game[i]){
                score[j]++;
            }
            else{
                x++;
            }
        }
        score[game[i]-1] += x;
    }
    for(int i=0;i<n;i++){
        printf("%d\n", score[i]);
    }
    free(arr);
    free(game);
    free(score);
    return 0;
}