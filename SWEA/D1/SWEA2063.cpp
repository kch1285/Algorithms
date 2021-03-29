#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
        
    sort(arr.begin(), arr.end());

    cout << arr[N/2] << '\n';

	return 0;
}