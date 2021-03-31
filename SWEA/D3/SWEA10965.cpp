#include<iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	int test_case;
	long long T, n, ans;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        bool flag = false;
        long long tmp;
        ans = 1;
        cin >> n;
        int cnt = 0;

        for(int i=2;i*i<=n;i++){
            cnt = 0;
            while(n % i == 0){
                cnt++;
                n /= i;
            }
            if(cnt % 2 != 0){
                ans *= i;
            }
        }
        
        if(n > 1)	ans *= n;
        cout << "#" << test_case << ' ' << ans << '\n';
	}
	return 0;
}