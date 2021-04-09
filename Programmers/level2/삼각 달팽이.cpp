#include <string>
#include <vector>
#include <iostream>
using namespace std;

int triangle[1001][1001];

vector<int> solution(int n) {
    vector<int> answer;
    int x = 0, y = 0, direction = 0, num = 1;
    
    for(int i=0;i<n;i++){
        if(direction == 0){
            for(int j=i;j<n;j++){
                triangle[x][y] = num;
                x++;
                num++;
            }
            x--;
            y++;
            direction = 1;
        }
        else if(direction == 1){
            for(int j=i;j<n;j++){
                triangle[x][y] = num;
                y++;
                num++;
            }
            x--;
            y -= 2;
            direction = 2;
        }
        else if(direction == 2){
            for(int j=i;j<n;j++){
                triangle[x][y] = num;
                x--;
                y--;
                num++;
            }
            x += 2;
            y++;
            direction = 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            answer.push_back(triangle[i][j]);
        }
    }
    return answer;
}