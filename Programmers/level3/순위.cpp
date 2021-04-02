#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<vector<int>> results) {
    int answer = 0;
    vector<vector<int>> boxing(n, vector<int>(n, 0));
    
    for(int i=0;i<results.size();i++){
        boxing[results[i][0]-1][results[i][1]-1] = 1;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(boxing[j][i] == 1){
                for(int k=0;k<n;k++){
                    if(boxing[i][k] == 1)
                        boxing[j][k] = 1;
                }
            }
        }
    }
    
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            cnt += boxing[i][j] + boxing[j][i];
        }
        if(cnt == n - 1)    answer++;
    }

    return answer;
}