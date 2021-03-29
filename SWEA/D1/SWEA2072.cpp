#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int answer = 0;
        int input;
        for(int i=0;i<10;i++){
            cin >> input;
            if(input % 2 != 0)	answer += input;
        }
        cout << "#" << test_case << ' ' << answer << '\n' ;
	}
	return 0;
}