#include <stdio.h>


struct Arr{
    int x;
    int y;
};
int check[1001];
int main(){
    int t, n, cnt=0, k, tmp;
    struct Arr a[1001];
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d", &n);
        for(int j=0;j<n;j++){
            scanf("%d", &a[j].y);
            a[j].x=j+1;
        }

        for(int j=0;j<n;j++){
            if(check[j]==0){
                if(a[j].x == a[j].y){
                    check[a[j].x-1] = 1;
                    cnt++;
                }
                else{
                    k = a[j].y-1;
                    if(a[j].x == a[k].y){
                        cnt++;
                        check[j] = 1;
                        check[k] = 1;
                    }
                    else{
                        while(a[j].x != a[k].y){
                            check[j] = 1;
                            check[k] = 1;
                            k = a[k].y-1;
                            cnt++;
                            check[k] = 1;
                        }
                    }
                }
            }
        }
        printf("%d\n", cnt);
        cnt=0;
        for(int j=0;j<n;j++){
            a[j].x = 0;
            a[j].y = 0;
        }
    }
    return 0;
}