#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, minute;

	cin>>T;
    minute = 11 * 24 * 60 + 11 * 60 + 11;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int d, h, m, result;
        cin >> d >> h >> m;
        result = (d * 24 * 60 + h * 60 + m) - minute;
        
        cout << "#" << test_case << ' ';
        if(result < 0)	cout << -1 << '\n';
        else	cout << result << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}