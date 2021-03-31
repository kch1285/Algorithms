#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N, M;
	int sum = 0;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int tmp = 0;
        sum = 0;
        cin >> N >> M;
        vector<int> A(N);
        vector<int> B(M);
        
        for(int i=0;i<N;i++){
            cin >> A[i];
        }
        
        for(int i=0;i<M;i++){
            cin >> B[i];
        }
        if(N < M){
            for(int i=0;i<=M-N;i++){
                tmp = 0;
                for(int j=0;j<N;j++){
                    tmp += A[j] * B[i + j];
                }
                if(sum < tmp)	sum = tmp;
            }
        }
        else{
            for(int i=0;i<=N-M;i++){
                tmp = 0;
                for(int j=0;j<M;j++){
                    tmp += A[i + j] * B[j];
                }
                if(sum < tmp)	sum = tmp;
            }
        }
        cout << "#" << test_case << ' ' << sum << '\n';
	}
	return 0;
}