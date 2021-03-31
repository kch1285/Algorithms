#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, k;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n >> k;
        cout << "#" << test_case << ' ';
        if(n % k == 0)	cout << 0 << '\n';
        else	cout << 1 << '\n';
	}
	return 0;
}