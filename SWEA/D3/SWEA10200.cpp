#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, a, b;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n >> a >> b;
        cout << "#" << test_case << ' ' << min(a, b) << ' ';
        if(a + b - n > 0)	cout << a + b - n << '\n';
        else	cout << 0 << '\n';
	}
	return 0;
}