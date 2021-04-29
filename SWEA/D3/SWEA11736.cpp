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
        int normalNumber = 0;
        cin >> n;
        vector<int> num(n);
        
        for(int i=0;i<n;i++){
            cin >> num[i];
        }
        
        for(int i=1;i<n-1;i++){
            if(num[i] > num[i + 1] && num[i] < num[i - 1])	normalNumber++;
            else if(num[i] < num[i + 1] && num[i] > num[i - 1])	normalNumber++;
        }
        cout << "#" << test_case << ' ' << normalNumber << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}