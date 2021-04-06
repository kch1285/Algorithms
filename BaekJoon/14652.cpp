#include <iostream>

using namespace std;


int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, k, tmp = 0;
    cin >> n >> m >> k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tmp == k){
                cout << i << ' ' << j << '\n';
                return 0;
            }
            tmp++;
        }
    }
}