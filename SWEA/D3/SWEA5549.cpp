#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    string input;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> input;
        int flag = input.back() - '0';
        cout << "#" << test_case << ' ';
        if(flag % 2 == 0)	cout << "Even" << '\n';
        else	cout << "Odd" << '\n';
	}
	return 0;
}