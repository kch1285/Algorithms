#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        double d, a, b, f, time;
        cin >> d >> a >> b >> f;
        time = d / (a + b);
        printf("#%d %.6f\n", test_case, f * time);
   //     cout << "#" << test_case << ' ' << f * time << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}