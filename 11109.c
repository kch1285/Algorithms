#include <stdio.h>

int arr[4];

int main(){
    int t, d, n, s, p, a, b;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d", &d, &n, &s, &p);
        a = d + (n*p);
        b = n * s;
        if(a>b){
            printf("do not parallelize\n");
        }
        else if(a<b){
            printf("parallelize\n");
        }
        else{
            printf("does not matter\n");
        }
    }
    return 0;
}