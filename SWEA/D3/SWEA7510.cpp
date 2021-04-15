#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n;
        vector<int> dp(n+1);
        int idx = 0, cnt = 0;
        dp[0] = 0;
        
        for(int i=1;i<dp.size();i++){
            dp[i] = dp[i-1] + i;
        }
        if(n == 1)	cout << "#" << test_case << ' ' << 1 << '\n';
        else{
        	for(int i=0;i<dp.size() - 1;i++){
            	idx = i + 1;
            	while(idx < dp.size()){
                	if(dp[idx] - dp[i] == n)	cnt++;
                	if(dp[idx] - dp[i] > n)	break;
                	idx++;
            	}
        	}
        	cout << "#" << test_case << ' ' << cnt << '\n';
        }
	}
	return 0;
}