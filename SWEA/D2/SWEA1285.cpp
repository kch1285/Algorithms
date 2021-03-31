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
        int closer = 100000;
        int cnt = 0;
        cin >> n;
        vector<int> stone(n);
        for(int i=0;i<n;i++){
            cin >> stone[i];
            if(stone[i] < 0)	stone[i] *= -1;
            if(stone[i] < closer)	closer = stone[i];
        }
        
        for(int i=0;i<n;i++){
            if(stone[i] == closer)	cnt++;
        }
        
        cout << "#" << test_case << ' ' << closer << ' ' << cnt << '\n';
	}
	return 0;
}