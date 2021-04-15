#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int maxLen = 0;
        vector<string> input(5);
        string result = "";
        for(int i=0;i<5;i++){
            cin >> input[i];
            if(maxLen < input[i].length())	maxLen = input[i].length();
        }
        
        for(int i=0;i<maxLen;i++){
            string tmp = "";
            for(int j=0;j<5;j++){
                if(input[j].length() < i + 1)	continue;
                tmp += input[j][i];
            }
            result += tmp;
        }
        cout << "#" << test_case << ' ' << result << '\n';
	}
	return 0;
}