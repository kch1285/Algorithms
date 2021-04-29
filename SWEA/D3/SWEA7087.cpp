#include<iostream>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
    char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 
                        			'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 
                       				'V', 'W', 'X', 'Y', 'Z'};
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int idx = 0;
        string input;
        set<char> title;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> input;
            title.insert(input[0]);
        }
        
        for(auto it=title.begin();it!=title.end();it++){
            if(*it == alpha[idx])	idx++;
            else	break;
        }
        
        cout << "#" << test_case << ' ' << idx << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}