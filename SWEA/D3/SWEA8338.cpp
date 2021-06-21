#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        
        int n, result = 0;
        cin >> n;
        vector<int> input(n);
        for(int i=0;i<n;i++){
            cin >> input[i];
            if(i == 0)	result = input[i];
            else{
                if(result + input[i] > result * input[i])	result += input[i];
                else	result *= input[i];
            }
        }
        cout << "#" << test_case << ' ' << result << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}