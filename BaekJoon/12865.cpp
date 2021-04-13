#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, k, w, v;
    cin >> n >> k;
    vector<int> dp(k + 1, 0);

    for(int i=0;i<n;i++){
        cin >> w >> v;
        for(int j=k;j>=w;j--){
            dp[j] = max(dp[j], dp[j-w] + v);
        }
    }

    cout << dp[k] << '\n';
    return 0;
}