#include<iostream>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        string input;
        set<char> s;
        cin >> input;
        for(int i=0;i<4;i++){
            s.insert(input[i]);
        }
        if(s.size() == 2) cout << "#" << test_case << ' ' << "Yes" << '\n';
        else	cout << "#" << test_case << ' ' << "No" << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}