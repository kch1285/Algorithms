#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ACMICPC{
    char college[31];
    char teamname[31];
    int solved;
    int penalty;
    int check = 0;
};

int compare(const void *x, const void *y){
    const struct ACMICPC *m, *n;
    m = (const struct ACMICPC *)x;
    n = (const struct ACMICPC *)y;
    if(m->solved < n->solved)
        return 1;
    else if(m->solved == n->solved){
        if(m->penalty < n->penalty)
            return -1;
        else
            return 1;
    }
    else
        return -1;
}

int main(){
    int n, k, c=1, p, tmp=0;
    struct ACMICPC a[100001];

    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++){
        scanf("%s %s %d %d", a[i].college, a[i].teamname, &a[i].solved, &a[i].penalty);
    }
    qsort(a, n, sizeof(struct ACMICPC), compare);
    printf("%s\n", a[0].teamname);
    while(k-1>0){
        if(a[tmp].check==0){
            printf("%s\n", a[0].teamname);
        }
        p = strcmp(a[c].college, a[c-1].college)
        if(p!=0){

        }
    }
    return 0;
}