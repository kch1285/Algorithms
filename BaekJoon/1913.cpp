#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, num, cnt, xIdx = 0, yIdx = 0;
    cin >> n >> num;
    cnt = n * n;
    vector<vector<int> > snail(n, vector<int>(n, 0));

    while(cnt > 0){
        while(xIdx < n && snail[xIdx][yIdx] == 0){
            snail[xIdx][yIdx] = cnt--;
            xIdx++;
        }
        xIdx--;
        yIdx++;

        while(yIdx < n && snail[xIdx][yIdx] == 0){
            snail[xIdx][yIdx] = cnt--;
            yIdx++;
        }
        yIdx--;
        xIdx--;

        while(xIdx >= 0 && snail[xIdx][yIdx] == 0){
            snail[xIdx][yIdx] = cnt--;
            xIdx--;
        }
        xIdx++;
        yIdx--;

        while(yIdx >= 0 && snail[xIdx][yIdx] == 0){
            snail[xIdx][yIdx] = cnt--;
            yIdx--;
        }
        yIdx++;
        xIdx++;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << snail[i][j] << ' ';
            if(snail[i][j] == num){
                xIdx = i;
                yIdx = j;
            }
        }
        cout << '\n';
    }
    cout << xIdx + 1 << ' ' << yIdx + 1 << '\n';
    return 0;
}