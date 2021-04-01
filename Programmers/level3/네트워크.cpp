#include <string>
#include <vector>

using namespace std;

bool check[201] = {false, };

void dfs(int n, int idx, vector<vector<int>> computers){
    check[idx] = true;
    for(int i=0;i<n;i++){
        if(i != idx){
            if(computers[idx][i] == 1 && !check[i]){
                dfs(n, i, computers);
            }
        }
    }
}


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0;i<n;i++){
        if(!check[i]){
            dfs(n, i, computers);
            answer++;
        }
    }

    return answer;
}