#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n,k, answer = 0;
    cin >> n >> k;

    if(n <= k){
        cout << 0 << '\n';
        return 0;
    }
    vector<int> sensor(n);
    vector<int> dist;

    for(int i=0;i<n;i++){
        cin >> sensor[i];
    }

    sort(sensor.begin(), sensor.end());

    for(int i=1;i<sensor.size();i++){
        dist.push_back(sensor[i] - sensor[i-1]);
    }
    sort(dist.begin(), dist.end());

    for(int i=0;i<dist.size()-k+1;i++){
        answer += dist[i];
    }
    cout << answer << '\n';
}