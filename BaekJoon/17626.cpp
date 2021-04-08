#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, val;
    cin >> n;
    vector<int> dp(n+1,0);

    dp[1] = 1;

    for(int i=2;i<=n;i++){
        val = 999999999;
        for(int j=1;j*j<=i;j++){
            int tmp = i-j*j;
            val = min(val, dp[tmp]);
        }
        dp[i] = val + 1;
    }

    cout << dp[n] << '\n';
    return 0;
}