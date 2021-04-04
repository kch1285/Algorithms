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
        cin >> n;
        vector<int> block(n);
        vector<int> ans(2, 0);
        
        for(int i=0;i<n;i++){
            cin >> block[i];
        }

        for(int i=0;i<n-1;i++){
            if(block[i] < block[i+1])	ans[0] = max(ans[0], block[i+1] - block[i]);
            else	ans[1] = max(ans[1], block[i] - block[i+1]);
        }
        
        cout << "#" << test_case << ' ' << ans[0] << ' ' << ans[1] << '\n';
	}
	return 0;
}