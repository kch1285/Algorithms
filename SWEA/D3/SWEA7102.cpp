#include<iostream>
#include <map>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, m;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int maxCnt = 0;
        cin >> n >> m;
        map<int, int> card;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(card.find(i+j) != card.end())	card[i+j]++;
                else	card[i+j] = 1;
            }
        }
        for(auto it = card.begin();it!=card.end();it++){
            if(maxCnt < it->second)	maxCnt = it->second;
        }
        cout << "#" << test_case << ' ';
        for(auto it = card.begin();it!=card.end();it++){
            if(maxCnt == it->second)	cout << it->first << ' ';
        }
        cout << '\n';
	}
	return 0;
}