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
    int n, result;
	for(test_case = 1; test_case <= 10; ++test_case)
	{
        result = 0;
        cin >> n;
        vector<vector<char> > input(8, vector<char>(8, '0'));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin >> input[i][j];
            }
        }
        
        for(int i=0;i<8;i++){
            string row_check = "", col_check = "";
            for(int j=0;j<8;j++){
                row_check += input[i][j];
                col_check += input[j][i];
            }
            for(int j=0;j<=8-n;j++){
                string row_substring = row_check.substr(j, n);
                string col_substring = col_check.substr(j, n);
                if(palindrome(row_substring, n))	result++;
                 if(palindrome(col_substring, n))	result++;
            }
        }
        cout << "#" << test_case << ' ' << result << '\n';
	}
	return 0;
}