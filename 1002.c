#include <stdio.h>
#include <math.h>


int main(){
    int t, x1, y1, r1, x2, y2, r2, ans, tmp;
    double dis;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        if(x1==x2 && y1==y2 && r1==r2)
            ans = -1;
        else if(x1==x2 && y1==y2 && r1!=r2)
            ans = 0;
        else{
            if(r1 > r2){
                tmp = r1;
                r1 = r2;
                r2 = tmp;
            }
            dis = sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2) * (y1 - y2)));
			if(dis + r1 < r2 || dis + r2 < r1)
                ans = 0;
			else if(r1 + r2 < dis)
                ans = 0;
			else if(dis == r1 + r2)
                ans = 1;
			else if(dis == r1 && r1 * 2 == r2)
                ans = 1;
			else if(r1 + r2 > dis)
                ans = 2;
		}
        printf("%d\n", ans);
    }
    return 0;
}