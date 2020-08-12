#include <stdio.h>
#include <string.h>


int main(){
    unsigned long long len_a, len_c, tmp_a = 1, tmp_c = 1, x = 0, y = 0;
    char a[20], b[20], c[20], d[20];
    scanf("%s %s %s %s", a, b, c, d);
    strcat(a, b);
    strcat(c, d);
    len_a = strlen(a);
    len_c = strlen(c);
    for(int i=len_a-1;i>=0;i--){
        x += (unsigned long long)(a[i]-48) * tmp_a;
        tmp_a *= 10;
    }
    for(int i=len_c-1;i>=0;i--){
        y += (unsigned long long)(c[i]-48) * tmp_c;
        tmp_c *= 10;
    }
    printf("%lld\n", x+y);
    return 0;
}