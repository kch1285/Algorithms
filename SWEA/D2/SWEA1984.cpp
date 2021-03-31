#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    double avg;
    int result;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        vector<int> arr(10);
        avg = 0;
        for(int i=0;i<10;i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        
        for(int i=1;i<9;i++){
            avg += arr[i];
        }
        
        avg /= 8;
        avg += 0.5;
        result = avg;
        cout << "#" << test_case << ' ' << result << '\n';
	}
	return 0;
}