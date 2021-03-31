#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> N;
        vector< vector<int> > arr(N, vector<int>(N, 0));
        vector< vector<int> > degree90(N, vector<int>(N, 0));
        vector< vector<int> > degree180(N, vector<int>(N, 0));
        vector< vector<int> > degree270(N, vector<int>(N, 0));
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin >> arr[i][j];
            }
        }
        
        for(int i=0;i<N;i++){
            for(int j=N-1;j>=0;j--){
                degree90[i][N - j - 1] = arr[j][i];
            }
        }

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                degree270[i][j] = arr[j][N - i - 1];
            }
        }

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                degree180[i][j] = arr[N - i - 1][N - j - 1];
            }
        }
        cout << "#" << test_case << '\n';
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout << degree90[i][j];
            }
            cout << ' ';
            for(int j=0;j<N;j++){
                cout << degree180[i][j];
            }
            cout << ' ';
            for(int j=0;j<N;j++){
                cout << degree270[i][j];
            }
            cout << '\n';
        }
	}
	return 0;
}