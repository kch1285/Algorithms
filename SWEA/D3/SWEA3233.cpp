#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    long long a, b;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        long long answer;
        cin >> a >> b;
        answer = a / b;
        cout << "#" << test_case << ' ' << answer * answer << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}