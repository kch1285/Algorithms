#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int N, M;
    int sum, result;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        result = 0;
        cin >> N >> M;
        vector < vector <int> > fly(N,vector <int>(N,0));
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin >> fly[i][j];
            }
        }
        
        for(int i=0;i<=N-M;i++){
            for(int j=0;j<=N-M;j++){
                sum = 0;
                for(int k=0;k<M;k++){
                    for(int l=0;l<M;l++){
                        sum += fly[i+k][j+l];
                    }
                }
                if(sum > result)	result = sum;
            }
        }
        cout << "#" << test_case << ' ' << result << '\n';

	}
	return 0;
}