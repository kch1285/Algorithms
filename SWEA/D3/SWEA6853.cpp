#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int x1, x2, y1, y2, n, x, y;
        int case1 = 0, case3 = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        
        for(int i=0;i<n;i++){
            cin >> x >> y;
            if(x1 < x && x < x2 && y1 < y && y < y2)	case1++;
            else if(x1 > x || x2 < x)	case3++;
            else if(y1 > y || y2 < y)	case3++;
        }
        
        cout << "#" << test_case << ' ' << case1 << ' ' << n - (case1 + case3) << ' ' << case3 << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}