#include <stdio.h>

int main(){
    int a, b, t, ans;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d %d", &a, &b);
        ans = a/b;
        printf("%d\n", ans*ans);
    }
    return 0;
}