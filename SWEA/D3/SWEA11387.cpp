#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
    double d, n, l;
    int total;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        total = 0;
        cin >> d >> l >> n;
        total = d * n;
        total += d * l * n * (n -1) / 200;

        cout << "#" << test_case << ' ' << total << '\n';
	}
	return 0;
}