#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int N, K;
    string grade[10] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> N >> K;
        vector<double> score(N);
        int mid, fin,hw, idx;
        double target;
        
        for(int i=0;i<N;i++){
            cin >> mid >> fin >> hw;
            score[i] = mid * 0.35 + fin * 0.45 + hw * 0.2;
        }
        target = score[K-1];
        
        sort(score.begin(), score.end(), greater<double>());
        
        for(int i=0;i<score.size();i++){
            if(target == score[i]){
                idx = i;
                break;
            }
        }
        idx = idx / (N / 10);
        cout << "#" << test_case << ' ' << grade[idx%10] << '\n';
	}
	return 0;
}