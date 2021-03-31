#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N, K;
    int ans;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        ans = 0;
        cin >> N >> K;
        vector< vector<int> >puzzle(N, vector<int>(N, 0));
        vector< vector<bool> >width(N, vector<bool>(N, false));
        vector< vector<bool> >height(N, vector<bool>(N, false));
        vector< vector<int> >w(N, vector<int>(N, 0));
        vector< vector<int> >h(N, vector<int>(N, 0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin >> puzzle[i][j];
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(puzzle[i][j] == 1 && width[i][j] == false){
                    int idx = j;
                    int cnt = 0;
                    while(puzzle[i][idx] == 1 && idx < N){
                        width[i][idx] = true;
                        cnt++;
                        idx++;
                    }
                    w[i][j] = cnt;
                }
            }
        }
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(puzzle[j][i] == 1 && height[j][i] == false){
                    int idx = j;
                    int cnt = 0;
                   while(puzzle[idx][i] == 1 && idx < N){
                        height[idx][i] = true;
                        cnt++;
                        idx++;
                       if(idx == N)	break;
                    }
                    h[j][i] = cnt;
                }
            }
        }
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(w[i][j] == K)	ans++;
                if(h[i][j] == K)	ans++;
            }
        }
        cout << "#" << test_case << ' ' << ans << '\n';
	}
	return 0;
}