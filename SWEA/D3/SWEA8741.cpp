#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    string input;
	cin>>T;
    getline(cin, input);
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string answer = "";
        getline(cin, input);
        answer += input[0];
        for(int i=1;i<input.length()-1;i++){
            if(input[i] == ' ')	answer += input[i+1];
        }
        for(int i=0;i<answer.length();i++){
            answer[i] = toupper(answer[i]);
        }
        cout << "#" << test_case << ' ' << answer << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}