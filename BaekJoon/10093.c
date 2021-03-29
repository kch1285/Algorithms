#include <stdio.h>

int main(){
    unsigned long long a, b, tmp, cnt;
    scanf("%lld %lld", &a, &b);
    if(a > b){
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a == b){
        cnt = 0;
    }
    else{
        cnt = b - a - 1;
    }
    printf("%lld\n", cnt);
    a++;
    while(a < b){
        printf("%lld ", a);
        a++;
    }
    printf("\n");
    return 0;
}