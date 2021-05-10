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
        vector<int> happyDay(n);
        vector<int> per;
        
        for(int i=0;i<n;i++){
            cin >> happyDay[i];
        }
        // 1 7 10 13 19
        
        for(int i=1;i<n;i++){
            int period = happyDay[i] - 1;
            bool flag = true;
            
            for(int j=0;j<per.size();j++){
                if(period % per[j] == 0){
                    flag = false;
                    break;
                }
            }
            if(flag)	per.push_back(period);
        }
        
        cout << "#" << test_case << ' ' << per.size() << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}