#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        bool flag = false;
        cin >> n;
        for(int i=1;i<10;i++){
            if(n % i == 0){
                if(n / i < 10){
                    flag = true;
                    break;
                }
            }
        }
        if(flag)	cout << "#" << test_case <<  ' ' << "Yes" << '\n';
        else	cout << "#" << test_case <<  ' ' << "No" << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}