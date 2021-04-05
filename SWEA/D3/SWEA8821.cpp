#include<iostream>
#include <set>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        set<char> answer;
        string num;
        cin >> num;
        for(int i=0;i<num.length();i++){
            if(answer.find(num[i]) != answer.end())	answer.erase(num[i]);
            else	answer.insert(num[i]);
        }
        cout << "#" << test_case << ' ' << answer.size() << '\n';
	}
	return 0;
}