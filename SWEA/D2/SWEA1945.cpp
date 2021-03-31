#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
    int num[5] = {2, 3, 5, 7, 11};
	int test_case;
	int T, n;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n;
        vector<int> ans(5, 0);

        for(int i=0;i<5;i++){
            while(n % num[i] == 0){
                ans[i]++;
                n /= num[i];
            }
        }
        
        cout << "#" << test_case << ' ';
        for(int i=0;i<5;i++){
            cout << ans[i] << ' ';
        }
        cout << '\n';
	}
	return 0;
}