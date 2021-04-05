#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > bingo(5, vector<int>(5, 0));
int cnt = 0;


void bingoGame(int number){
    int xIdx, yIdx, row_sum = 0, col_sum = 0, diagonal_sum = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(bingo[i][j] == number){
                bingo[i][j] = 0;
                xIdx = i;
                yIdx = j;
                break;
            }
        }
    }

    for(int i=0;i<5;i++)    row_sum += bingo[xIdx][i];
    for(int i=0;i<5;i++)    col_sum += bingo[i][yIdx];

    if(xIdx == yIdx){
        for(int i=0;i<5;i++)    diagonal_sum += bingo[i][i];
        if(diagonal_sum == 0)   cnt++;
    }
    diagonal_sum = 0;

    if(xIdx + yIdx == 4){
        for(int i=0;i<5;i++)    diagonal_sum += bingo[i][4-i];
        if(diagonal_sum == 0)   cnt++;
    }

    if(row_sum == 0)    cnt++;
    if(col_sum == 0)    cnt++;
}

int main(){
    int num;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> bingo[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> num;
            bingoGame(num);
            if(cnt >= 3){
                cout << i * 5 + j + 1 << '\n';
                return 0;
            }
        }
    }
    return 0;
}