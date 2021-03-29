#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    double p, q;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> p >> q;
        cout << "#" << test_case << ' ';
        if((1-p) * q < p * (1-q) * q)	cout << "YES" << '\n';
        else	cout << "NO" << '\n';
	}
	return 0;
}