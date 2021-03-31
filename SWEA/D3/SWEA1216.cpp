#include<iostream>
#include <vector>
#include <string>
using namespace std;

bool palindrome(string a, int cnt){
    for(int i=0;i<cnt/2;i++){
        if(a[i] != a[cnt - i - 1])	return false;
    }
    return true;
}

int main(int argc, char** argv)
{
	int test_case;
    int result, t;
	for(test_case = 1; test_case <= 10; ++test_case)
	{
        result = 0;
        cin >> t;
        vector<vector<char> > input(100, vector<char>(100, '0'));
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                cin >> input[i][j];
            }
        }
        
        for(int i=0;i<100;i++){
            string row_check = "", col_check = "";
            for(int j=0;j<100;j++){
                row_check += input[i][j];
                col_check += input[j][i];
            }
            for(int j=0;j<100;j++){
                for(int k=0;k<100 - j;k++){
                    string row_substring = row_check.substr(j, k+1);
                    string col_substring = col_check.substr(j, k+1);
                    if(palindrome(row_substring, k+1))	result = max(result, k+1);
                    if(palindrome(col_substring, k+1))	result = max(result, k+1);
                }
            }
        }
        cout << "#" << test_case << ' ' << result << '\n';
	}
	return 0;
}