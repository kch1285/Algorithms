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
        cin >> n;
        vector<int> seat(n);
        int max_seat = 0, sum = 0;
        for(int i=0;i<n;i++){
            cin >> seat[i];
            sum += seat[i];
            if(max_seat < seat[i])	max_seat = seat[i];
        }
        sum += max_seat + seat.size();
        cout << "#" << test_case << ' ' << sum << '\n';
	}
	return 0;
}