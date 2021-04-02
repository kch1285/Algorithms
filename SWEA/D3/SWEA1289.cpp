#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, cnt;
    string memory;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cnt = 0;
        cin >> memory;
        string original = "";
        for(int i=0;i<memory.length();i++) original += '0';
        
        for(int i=0;i<memory.length();i++){
            if(memory[i] == '1' && original[i] == '0'){
                cnt++;
                for(int j=i;j<original.length();j++)	original[j] = '1';
            }
            else if(memory[i] == '0' && original[i] == '1'){
                cnt++;
                for(int j=i;j<original.length();j++)	original[j] = '0';
            }
        }
        
        cout << "#" << test_case << ' ' << cnt << '\n';
	}
	return 0;
}