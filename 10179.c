#include <stdio.h>

int main(){
    int t;
    double price;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%lf", &price);
        printf("$%.2lf\n", price*0.8);
    }
    return 0;
}