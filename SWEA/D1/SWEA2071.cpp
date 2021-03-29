#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int sum = 0;
        int input;
        for(int i=0;i<10;i++){
            cin >> input;
            sum += input;
        }
        cout << "#" << test_case << ' ' << (sum + 5) / 10 << '\n';
	}
	return 0;
}