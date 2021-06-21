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
        long long n;
        cin >> n;
        cout << "#" << test_case << ' ' << 2 * n * n - 4 * n + 3 << ' ' << 2 * n * n - 1 << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}