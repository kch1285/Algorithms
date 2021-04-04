#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        string input, result = "";
        cin >> input;
        for(int i=0;i<input.length();i++){
            if(input[i] != 'a' && input[i] != 'e' && input[i] != 'i' && input[i] != 'o' && input[i] != 'u')	result += input[i];
        }
        
        cout << "#" << test_case << ' ' << result << '\n';
	}
	return 0;
}