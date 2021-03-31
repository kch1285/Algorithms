#include<iostream>
#include <cmath>
using namespace std;

int board[10] = {20, 40, 60, 80, 100, 120, 140, 160, 180, 200};

int main(int argc, char** argv)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	int test_case;
	int T, n;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n;
        int x, y, score = 0, tmp;
        double r, dtmp;
        for(int i=0;i<n;i++){
            cin >> x >> y;
            r = sqrt(x * x + y * y);

            if(r > 200)	continue;
            dtmp  = r / 20;
            tmp = (int)r / 20;
            
            if(dtmp - tmp == 0){
                if(tmp == 0)	score += 10;
                else	score += 11 - tmp;
            }
            else	score += 10 - tmp;
        }
        cout << "#" << test_case << ' ' << score << '\n';
	}
	return 0;
}