#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, sum, ans;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        ans = 0;
        sum = 0;
        cin >> n;
        vector<int> income(n);
        for(int i=0;i<n;i++){
            cin >> income[i];
            sum += income[i];
        }
        
        for(int i=0;i<n;i++){
            if(sum / n >= income[i])	ans++;
        }
        cout << "#" << test_case << ' ' << ans << '\n';
	}
	return 0;
}