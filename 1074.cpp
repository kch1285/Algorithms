#include <iostream>

using namespace std;

int arr[33000][33000];
int cnt = 0, r, c;
int visit[33000][33000];
void Z(int x, int y, int len){
    if(x==r && y==c)    return;
    for(int i=x;i<x+len;i++){
        for(int j=y;j<y+len;j++){
            
                Z(x, y, len/2);
                Z(len/2+x, y, len/2);
                Z(x, len/2+y, len/2);
                Z(len/2+x, len/2+y, len/2);
            
        }
    }
    cnt++;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n >> r >> c;
    Z(0, 0, n);
    cout << cnt << '\n';
    return 0;
}