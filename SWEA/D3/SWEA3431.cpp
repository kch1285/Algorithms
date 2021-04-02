#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, l, u, x;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> l >> u >> x;
        cout << "#" << test_case << ' ';
        if(x > u)	cout << -1 << '\n';
        else if(x < l)	cout << l - x << '\n';
        else	cout << 0 << '\n';
	}
	return 0;
}