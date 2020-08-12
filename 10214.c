#include <stdio.h>

struct Score{
    int yonsei;
    int korea;
};

int main(){
    int t, sum_y=0, sum_k=0;
    struct Score s[9];
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        for(int j=0;j<9;j++){
            scanf("%d %d", &s[j].yonsei, &s[j].korea);
        }
        for(int j=0;j<9;j++){
            sum_y = sum_y + s[j].yonsei;
            sum_k = sum_k + s[j].korea;
        }
        if(sum_y > sum_k)
            printf("Yonsei\n");
        else if(sum_y < sum_k)
            printf("Korea\n");
        else
            printf("Draw\n");
        for(int j=0;j<9;j++){
            s[j].yonsei = 0;
            s[j].korea = 0;
        }
        sum_y = 0;
        sum_k = 0;
    }
    return 0;
}