#include <stdio.h>

int tt[51];
int pp[51];

int main(){
    int n, m, tru, partypeople,cnt=0, x=0;
    scanf("%d %d", &n, &m);
    scanf("%d", &tru);
    for(int i=0;i<tru;i++){
        scanf("%d", &tt[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d", &partypeople);
        for(int j=0;j<partypeople;j++){
            scanf("%d", &pp[j]);
        }
        for(int j=0;j<partypeople;j++){
            for(int k=0;k<tru;k++){
                if(pp[j] == tt[k])
                    x=1;
            }
        }
        if(x==0)
            cnt++;
        for(int j=0;j<partypeople;j++)
            pp[j] = 0;
    }
    printf("%d\n", cnt);
    return 0;
}