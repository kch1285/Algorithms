#include <stdio.h>

int d[101];

int main(){
    int t, k, tmp;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d", &k);
        for(tmp=0;tmp+tmp*tmp<=k;tmp++){
        }
        printf("%d\n", tmp-1);
    }
    return 0;
}