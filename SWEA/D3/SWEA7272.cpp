#include<iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv)
{
    map<char, int> hole;
    hole['A'] = 1; hole['B'] = 2; hole['C'] = 0; hole['D'] = 1;
    hole['E'] = 0; hole['F'] = 0; hole['G'] = 0; hole['H'] = 0;
    hole['I'] = 0; hole['J'] = 0; hole['K'] = 0; hole['L'] = 0;
    hole['M'] = 0; hole['N'] = 0; hole['O'] = 1; hole['P'] = 1;
    hole['Q'] = 1; hole['R'] = 1; hole['S'] = 0; hole['T'] = 0;
    hole['U'] = 0; hole['V'] = 0; hole['W'] = 0; hole['X'] = 0;
    hole['Y'] = 0; hole['Z'] = 0;
    
	int test_case;
	int T;
    string tmp;
	cin>>T;
    getline(cin, tmp);
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string input, firstStr, secondStr;
        getline(cin, input);
        istringstream ss(input);
        ss >> firstStr >> secondStr;
        
        if(firstStr.length() != secondStr.length())	cout << "#" << test_case << " DIFF" << '\n';
        else{
            bool flag = true;
            for(int i=0;i<firstStr.length();i++){
                if(hole[firstStr[i]] != hole[secondStr[i]]){
                    flag = false;
                    break;
                }
            }
            if(flag)	cout << "#" << test_case << " SAME" << '\n';
            else	cout << "#" << test_case << " DIFF" << '\n';
        }
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}