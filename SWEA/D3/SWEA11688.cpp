#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int a = 1, b = 1;
        string input;
        cin >> input;
        for(int i=0;i<input.length();i++){
            if(input[i] == 'L')	b = a + b;
            else if(input[i] == 'R')	a = a + b;
        }
        cout << "#" << test_case << ' ' << a << ' ' << b << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}