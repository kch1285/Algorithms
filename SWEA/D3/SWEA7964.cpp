#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, d;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int zeroCnt = 0, answer = 0, kingdom;
        cin >> n >> d;
        for(int i=0;i<n;i++){
            cin >> kingdom;
            if(kingdom == 1){
                answer += zeroCnt / d;
                zeroCnt = 0;
            }
            else	zeroCnt++;
        }
        answer += zeroCnt / d;
        cout << "#" << test_case << ' ' << answer << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}