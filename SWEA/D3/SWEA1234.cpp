#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int n, idx;

	for(test_case = 1; test_case <= 10; ++test_case)
	{
        idx = 0;
        string psword;
        cin >> n >> psword;
        while(idx < psword.length() - 1){
            if(psword[idx] == psword[idx + 1]){
                psword.erase(idx, 2);
                idx--;
                if(idx < 0) idx = 0;
           //     cout << psword << '\n';
            }
            else	idx++;
        }
        cout << "#" << test_case << ' ' << psword << '\n';
	}
	return 0;
}