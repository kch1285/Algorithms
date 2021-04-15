#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, a, b, c;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int result = 0;
        cin >> a >> b >> c;
        if(a < b){
            result = c / a;
            c %= a;
            result += c / b;
        }
        else{
            result = c / b;
            c %= b;
            result += c / a;
        }
        cout << "#" << test_case << ' ' << result << '\n';
	}
	return 0;
}