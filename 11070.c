#include <stdio.h>


struct team{
    double win;
    double lose;
    double EV;
};


struct team x[1001];

int main(){
    int t, n, m, a, b;
    long long max, min;
    double p, q;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d %d", &n, &m);
        for(int j=0;j<m;j++){
            scanf("%d %d %lf %lf", &a, &b, &p, &q);
            x[a].win += p;
            x[a].lose += q;
            x[b].win += q;
            x[b].lose += p;
        }
        for(int j=1;j<=n;j++){
            if(x[j].win == 0 && x[j].lose == 0){
                x[j].EV = 0;
            }
            else{
                x[j].EV = (x[j].win)*(x[j].win) / ((x[j].win)*(x[j].win) + (x[j].lose)*(x[j].lose));
            }
        }
        max = x[1].EV * 1000;
        min = x[1].EV * 1000;

        for(int j=2;j<=n;j++){
            if((int)(x[j].EV * 1000) > max){
                max = (int)(x[j].EV * 1000);
            }
            if((int)(x[j].EV * 1000) < min){
                min = (int)(x[j].EV * 1000);
            }
        }
        printf("%lld\n%lld\n", max, min);
        for(int j=1;j<=n;j++){
            x[j].win = 0;
            x[j].lose = 0;
            x[j].EV = 0;
        }
    }
    return 0;
}