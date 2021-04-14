#include <iostream>
#include <vector>

using namespace std;

int n, r, c,result;

void Z(int x, int y, int length){
    if(x == r && y == c){
        cout << result << '\n';
        return;
    }
    if(r < x + length && r >= x && c < y + length && c >= y){
        Z(x, y, length/2);
        Z(x, y + length/2, length/2);
        Z(x + length/2, y, length/2);
        Z(x + length/2, y + length/2, length/2);
    }
    else    result += length * length;
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int len = 1;
    cin >> n >> r >> c;

    for(int i=0;i<n;i++)    len *= 2;
    Z(0, 0, len);
    return 0;
}