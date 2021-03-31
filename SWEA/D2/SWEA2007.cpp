#include<iostream>

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
        string pattern= "";

        for(int i=1;i<=10;i++){
            if(input.substr(0, i) == input.substr(i, i))	pattern = input.substr(0, i);
        }
        
        for(int i=1;i<=pattern.length();i++){
            if(pattern.length() % i == 0){
                while(pattern.substr(0, pattern.length() / i) ==  pattern.substr(pattern.length() / i, pattern.length() / i) && pattern.length() > 1)
                    pattern = pattern.substr(0, pattern.length() / i);
            }
        }

        cout << "#" << test_case << ' ' << pattern.length() << '\n';

	}
	return 0;
}