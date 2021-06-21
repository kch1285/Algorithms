#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        long long l;
        cin >> l;
        cout << "#" << test_case << ' ' << (l/2) * (l/2) << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}