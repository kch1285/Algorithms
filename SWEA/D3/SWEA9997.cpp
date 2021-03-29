#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, degree;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> degree;
        cout << "#" << test_case << ' ' << degree / 30 << ' ';
        degree %= 30;
        cout << degree * 2 << '\n';

	}
	return 0;
}