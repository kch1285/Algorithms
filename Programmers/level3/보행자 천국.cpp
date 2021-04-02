#include <vector>
#include <iostream>

using namespace std;

int MOD = 20170805;
int road[501][501][2];
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int m, int n, vector<vector<int>> city_map) {
    int answer = 0;
    int idx = 0;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            road[i][j][0] = 0;
            road[i][j][1] = 0;
        }
    }
    while(city_map[0][idx] != 1){
        road[0][idx][0] = 1;
        idx++;
        if(idx > n - 1) break;
    }
    idx = 0;
    while(city_map[idx][0] != 1){
        road[idx][0][1] = 1;
        idx++;
        if(idx > m - 1) break;
    }
    // 둘다 1 = 0
    // 둘 다 0 = +1
    // 하나는 1 하나는 0 = +1
    // 하나는 2 하나는 0 = +1
    // 둘다 2 = 0
    // 하나는 1 하나는 2 = 0
    
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(city_map[i-1][j] == 0){
                road[i][j][1] += road[i-1][j][1] + road[i-1][j][0];
                road[i][j][1] %= MOD;
            }
            else if(city_map[i-1][j] == 2){
                road[i][j][1] += road[i-1][j][1];
                road[i][j][1] %= MOD;
            }
            
            if(city_map[i][j-1] == 0){
                road[i][j][0] += road[i][j-1][0] + road[i][j-1][1];
                road[i][j][0] %= MOD;
            }
            else if(city_map[i][j-1] == 2){
                road[i][j][0] += road[i][j-1][0];
                road[i][j][0] %= MOD;
            }
        }
    }
    
    answer = (road[m-1][n-1][0] + road[m-1][n-1][1]) % MOD;

    return answer;
}