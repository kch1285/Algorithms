#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, input;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int sum = 0;
        for(int i=0;i<5;i++){
            cin >> input;
            if(input < 40)	input = 40;
            sum += input;
        }
        cout << "#" << test_case << ' ' << sum / 5 << '\n';
	}
	return 0;
}