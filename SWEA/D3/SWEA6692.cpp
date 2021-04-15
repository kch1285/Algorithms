#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        double p, x, sum = 0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> p >> x;
            sum += p * x;
        }
        printf("#%d %.6f\n", test_case, sum);
	}
	return 0;
}