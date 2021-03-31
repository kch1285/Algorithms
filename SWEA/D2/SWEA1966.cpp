#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> N;
        vector<int> arr(N);
        
        for(int i=0;i<N;i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        cout << "#" << test_case << ' ';
        for(int i=0;i<N;i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
	}
	return 0;
}