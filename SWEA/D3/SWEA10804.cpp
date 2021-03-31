#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        string input;
        cin >> input;
        cout << "#" << test_case << ' ';
        for(int i=input.length() - 1;i>=0;i--){
            if(input[i] == 'q')	cout << 'p';
            else if(input[i] == 'd')	cout << 'b';
            else if(input[i] == 'p')	cout << 'q';
            else	cout << 'd';
        }
        cout << '\n';
	}
	return 0;
}