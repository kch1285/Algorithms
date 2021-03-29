#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int max_num = -1;
        int input;
        for(int i=0;i<10;i++){
            cin >> input;
            if(input > max_num)	max_num = input;
        }
        
        cout << "#" << test_case << ' ' << max_num << '\n';
	}
	return 0;
}