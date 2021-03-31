#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, m, ans;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        ans = -1;
        cin >> n >> m;
        vector<int> v(n);
        for(int i=0;i<n;i++)	cin >> v[i];
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[i] + v[j] <= m)	ans = max(ans, v[i] + v[j]);
            }
        }
        cout << "#" << test_case << ' ' << ans << '\n';
	}
	return 0;
}