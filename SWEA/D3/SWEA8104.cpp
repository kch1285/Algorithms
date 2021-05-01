#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, k;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int score = 0;
        cin >> n >> k;
        
        for(int i=1;i<=n;i++){
            if(i % 2 == 0)	score += i * k;
            else	score += (i - 1) * k + 1;
        }
        
        cout << "#" << test_case << ' ';
        if(n % 2 == 0){
            for(int i=0;i<k;i++)	cout << score << ' ';
            cout << '\n';
        }
        else{
            for(int i=0;i<k;i++)	cout << score++ << ' ';
            cout << '\n';
        }
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}