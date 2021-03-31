#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{

    int money[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
	int test_case;
	int T, N;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> N;
        vector<int> result;
        for(int i=0;i<8;i++){
            result.push_back(N / money[i]);
            N %= money[i];
        }
        cout << "#" << test_case << '\n';
        for(int i=0;i<8;i++){
            cout << result[i] << ' ';
        }
        cout << '\n';
	}
	return 0;
}