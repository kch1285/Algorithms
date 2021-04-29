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
        int idx, up = 0, tmp;
        string a, b, answer = "";
        cin >> a >> b;
        
        if(a.length() > b.length()){
            idx = a.length();
            while(a.length() > b.length())	b = '0' + b;
        }
        
        else{
            idx = b.length();
            while(a.length() < b.length())	a = '0' + a;
        }
        idx--;
        while(idx >= 0){
            tmp = a[idx] - '0' + b[idx] - '0' + up;
            if(tmp >= 10){
                tmp %= 10;
                up = 1;
            }
            else	up = 0;
            answer = to_string(tmp) + answer;
            idx--;
        }
        if(up == 1)	answer = '1' + answer;
        cout << "#" << test_case << ' ' << answer << '\n';
	}
	return 0;
}