#include<iostream>
#include <stack>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, k, input, total;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        total = 0;
        stack<int> s;
        cin >> k;
        for(int i=0;i<k;i++){
            cin >> input;
            if(input == 0)	s.pop();
            else	s.push(input);
        }
        while(!s.empty()){
            total += s.top();
            s.pop();
        }
        cout << "#" << test_case << ' ' << total << '\n';
	}
	return 0;
}