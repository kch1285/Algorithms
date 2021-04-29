#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, m;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        bool flag;
        string num;
        int money, total = 0;
        cin >> n >> m;
        vector<pair<string, int> > win(n);
        vector<string> buy(m);
        
        for(int i=0;i<n;i++){
            cin >> num >> money;
            win[i] = make_pair(num, money);
        }
        
        for(int i=0;i<m;i++){
            cin >> buy[i];
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                flag = true;
                for(int k=0;k<8;k++){
                    if(win[j].first[k] != '*'){
                        if(win[j].first[k] != buy[i][k]){
                            flag = false;
                            break;
                        }
                    }
                }
                if(flag)	total += win[j].second;
            }
        }
        cout << "#" << test_case << ' ' << total << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}