#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, m, *game, *admin, vote, *ans, result, k;
    scanf("%d %d", &n, &m);
    game = (int*)malloc(sizeof(int)*n);
    admin = (int*)malloc(sizeof(int)*m);
    ans = (int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++)
        scanf("%d", &game[i]);
    for(int i=0;i<m;i++)
        scanf("%d", &admin[i]);
    

    for(int i=0;i<m;i++){
        vote = 1001;
        for(int j=0;j<n;j++){
            if(admin[i]>=game[j] && j<vote){
                vote = j;
            }
        }
        ans[vote]++;
    }
    result = ans[0];
    for(int i=1;i<n;i++){
        if(result < ans[i]){
            result = ans[i];
            k=i;
        }
    }
    printf("%d\n", k+1);
    free(ans);
    free(admin);
    free(game);
    return 0;
}