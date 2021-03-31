#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, cnt;
    string search_string, input, checkString;

	for(test_case = 1; test_case <= 10; ++test_case)
	{
        cnt = 0;
        cin >> T >> search_string >> input;
        for(int i=0;i<=input.length() - search_string.length();i++){
            checkString = input.substr(i, search_string.length());
            if(checkString == search_string)	cnt++;
        }
        
        cout << "#" << test_case << ' ' << cnt << '\n';
	}
	return 0;
}