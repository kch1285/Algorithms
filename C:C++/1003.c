#include <stdio.h>

long long int d[41];

long long int fibonacci(int x){
    if(x==0) return 0;
    if(x==1) return 1;
    if(x==2) return 1;
    if(d[x]!=0) return d[x];
    return d[x] = fibonacci(x-1) + fibonacci(x-2);
}

int main(){
    int n,t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d", &n);
        if(n==0){
            printf("%lld %lld\n", fibonacci(n+1), fibonacci(n));
        }
        else{
             printf("%lld %lld\n", fibonacci(n-1), fibonacci(n));
        }
    }
    return 0; 
}