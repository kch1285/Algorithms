#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int N;
        long long int profit = 0;
        int tmp;
        cin >> N;
        vector<int> price(N);
        
        for(int i=0;i<N;i++){
            cin >> price[i];
        }
        tmp = price[N-1];
        for(int i=N-2;i>=0;i--){
            if(tmp > price[i])	profit += tmp - price[i];
            else	tmp = price[i];
        }
        cout << "#" << test_case << ' ' << profit << '\n';

	}
	return 0;
}