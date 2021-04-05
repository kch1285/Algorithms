#include <iostream>

using namespace std;

int arr[128][128];
int blue = 0, white = 0;
void func(int x, int y, int len){
    int tmp = arr[x][y];
    for(int i=x;i<x+len;i++){
        for(int j=y;j<y+len;j++){
            if(arr[i][j] != tmp){
                tmp = -1;
                func(x, y, len/2);
                func(len/2+x, y, len/2);
                func(x, len/2+y, len/2);
                func(len/2+x, len/2+y, len/2);
                break;
            }
        }
        if(tmp == -1)   break;
    }
    if(tmp == 0)    white++;
    else if(tmp == 1)   blue++;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    func(0, 0, n);
    cout << white << '\n' << blue << '\n';
    return 0;
}