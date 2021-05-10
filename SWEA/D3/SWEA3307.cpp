#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int input;
        cin >> n;
        vector<int> num;
        num.push_back(0);
        
        for(int i=0;i<n;i++){
            cin >> input;
            if(num.back() < input){
                num.push_back(input);
            }
            else{
                auto it = lower_bound(num.begin(), num.end(), input);
                *it = input;
            }
        }
        
        cout << "#" << test_case << ' ' << num.size() - 1 << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}