#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int n, m;
        cin >> n >> m;
        cout << "#" << test_case << ' ' << 2 * m - n << ' ' << n - m << '\n';
	}
	return 0;
}