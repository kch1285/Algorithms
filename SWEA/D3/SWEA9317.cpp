#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int cnt = 0;
        cin >> n;
        vector<string> v(2);
        cin >> v[0] >> v[1];

        for(int i=0;i<n;i++){
            if(v[0][i] == v[1][i])	cnt++;
        }
        cout << "#" << test_case << ' ' << cnt << '\n';
	}
	return 0;
}