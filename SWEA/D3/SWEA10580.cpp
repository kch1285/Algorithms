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
        vector<pair<int, int> > v(n);
        int ans = 0;
        for(int i=0;i<n;i++){
            cin >> v[i].first >> v[i].second;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i].first  > v[j].first && v[i].second < v[j].second)	ans++;
            }
        }
        
        cout << "#" << test_case << ' ' << ans << '\n';
	}
	return 0;
}