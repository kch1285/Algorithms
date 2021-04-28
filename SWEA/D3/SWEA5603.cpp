#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int sum = 0;
        int result = 0;
        cin >> n;
        vector<int> input(n);
        
        for(int i=0;i<n;i++){
            cin >> input[i];
            sum += input[i];
        }
        
        sum /= n;
        
        for(int i=0;i<n;i++){
            result += abs(sum - input[i]);
        }
        result /= 2;
        cout << "#" << test_case << ' ' << result << '\n';
	}
	return 0;
}