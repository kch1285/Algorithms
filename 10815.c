#include <stdio.h>


int plus[10000001];
int minus[10000001];
int result[500001];

int main(){
    int n, m, tmp;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &tmp);
        if(tmp >= 0){
            plus[tmp] = 1;
        }
        else{
            minus[-tmp] = 1;
        }
    }
    scanf("%d", &m);
    for(int i=0;i<m;i++){
        scanf("%d", &tmp);
        if(tmp>=0){
            result[i] = plus[tmp];
        }
        else{
            result[i] = minus[-tmp];
        }
    }
    for(int i=0;i<m;i++){
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}