#include <iostream>

using namespace std;

int city[102][102];

int main(){
    cin.tie(NULL);
    int n, m, a, b, c;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j)    city[i][j] = 987654321;
        }
    }
    for(int i=0;i<m;i++){
        cin >> a >> b >> c;
        if(city[a][b] > c) city[a][b] = c;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(city[j][k] > city[j][i] + city[i][k])
                    city[j][k] = city[j][i] + city[i][k];
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(city[i][j] == 987654321)
                city[i][j] = 0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << city[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}