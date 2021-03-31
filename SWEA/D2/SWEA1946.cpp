#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;
    string alpha;
    int num, cnt;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n;
        cnt = 0;
        vector<pair<string, int> > doc(n);
        
        for(int i=0;i<n;i++){
            cin >> alpha >> num;
            doc[i] = make_pair(alpha, num);
        }
        cout << "#" << test_case << '\n';
        for(int i=0;i<n;i++){
            for(int j=0;j<doc[i].second;j++){
                cout << doc[i].first;
                cnt++;
                if(cnt == 10){
                	cnt = 0;
                	cout << '\n';
                }
            }
        }
        cout << '\n';
	}
	return 0;
}