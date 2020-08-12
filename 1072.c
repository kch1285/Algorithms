#include <stdio.h>
#include <math.h>

int main(){
    long long p = 0;
    double X, Y, Z;

    scanf("%lf %lf", &X, &Y);
    
    Z = floor(100*Y/X);
    if(Z >= 99) {
        printf("-1\n");
    }
    else{
        p = ceil((X*Z+X-100*Y)/(99-Z));
        printf("%lld\n", p);
    }
    return 0;
}