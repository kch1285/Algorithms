#include<iostream>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, cnt;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n;
        set<int> check;
        cnt = 0;
        int tmp;
        
        while(check.size() < 10){
            cnt += n;
            tmp = cnt;
            while(tmp > 0){
                check.insert(tmp % 10);
                tmp /= 10;
            }
        }
        
        cout << "#" << test_case << ' ' << cnt << '\n';
	}
	return 0;
}