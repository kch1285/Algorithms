#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, b, e;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n >> b >> e;
        int x, ans = 0;
        for(int i=0;i<n;i++){
            cin >> x;
            for(int j=b-e;j<=b+e;j++){
                if(j % x == 0){
                    ans++;
                    break;
                }
            }
        }
        cout << "#" << test_case << ' ' << ans << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}