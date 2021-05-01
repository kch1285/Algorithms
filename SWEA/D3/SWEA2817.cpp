#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k, answer;

vector<int> num;

void sol(int idx, int sum){
    sum += num[idx];
    
    if(idx >= n)	return;
    if(sum == k)	answer++;
    
    sol(idx + 1, sum - num[idx]);
    sol(idx + 1, sum);
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int input;
        cin >> n >> k;
        num.clear();
        answer = 0;
        
        for(int i=0;i<n;i++){
            cin >> input;
            num.push_back(input);
        }
        sol(0, 0);
        cout <<"#" << test_case << ' ' << answer << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}