#include<iostream>
#include <vector>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int cnt = 0;
        vector<int> num(7);
        set<int> sum;
        
        for(int i=0;i<7;i++){
            cin >> num[i];
        }
        
        for(int i=0;i<5;i++){
            for(int j=i+1;j<6;j++){
                for(int k=j+1;k<7;k++){
                    sum.insert(num[i] + num[j] + num[k]);
                }
            }
        }
        
        for(auto it = sum.rbegin();it!=sum.rend();it++){
            cnt++;
            if(cnt == 5){
                cout << "#" << test_case << ' ' << *it << '\n';
                break;
            }
            
        }
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}