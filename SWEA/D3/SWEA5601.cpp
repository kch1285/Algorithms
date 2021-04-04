#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n;
         cout << "#" << test_case << ' ';
        for(int i=0;i<n;i++){
            cout << "1/" << n << ' ';
        }
        cout << '\n';
	}
	return 0;
}