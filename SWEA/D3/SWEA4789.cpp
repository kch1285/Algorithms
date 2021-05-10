#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int cnt = 0, clapPeople = 0;
        string input;
        cin >> input;
        
        for(int i=0;i<input.length();i++){
            if(input[i] - '0' == 0)	continue;
            if(i <= clapPeople)	clapPeople += input[i] - '0';
            else{
                cnt += i - clapPeople;
                clapPeople += i - clapPeople + input[i] - '0';
            }
        }
        
        cout << "#" << test_case << ' ' << cnt << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}