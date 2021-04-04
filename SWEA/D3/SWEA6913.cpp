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
        cin >> n >> m;
        vector<vector<int> > contest(n, vector<int>(m, 0));
        vector<pair<int, int> > answer;
        answer.push_back(make_pair(0, 0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> contest[i][j];
            }
        }
        
        for(int i=0;i<n;i++){
            int score = 0;
            for(int j=0;j<m;j++)	score += contest[i][j];
            if(answer[0].second < score){
                answer[0].first = 1;
                answer[0].second = score;
            }
            else if(answer[0].second == score)	answer[0].first++;
        }
        
        cout << "#" << test_case << ' ' << answer[0].first << ' ' << answer[0].second << '\n';
	}
	return 0;
}