#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int sum = 0;
        cin >> n;
        vector<string> farm(n);
        for(int i=0;i<n;i++){
            cin >> farm[i];
        }
        
        for(int i=0;i<n;i++){
            if(i <= n / 2){
                for(int j=n/2-i;j<=n/2+i;j++){
                    sum += (int)farm[i][j] - '0';
                }
            }
            else{
                for(int j=n/2 - (n-i-1);j<=n/2 + (n-i-1);j++){
                    sum += (int)farm[i][j] - '0';
                }
            }
        }
        cout << "#" << test_case << ' ' << sum << '\n';
	}
	return 0;
}