#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long dp[100001];

int solution(int n, vector<int> money) {
    int answer = 0;
    sort(money.begin(), money.end());
    dp[0] = 1;
    
    for(int i=money[0];i<=n;i+=money[0]){
        dp[i] = 1;
    }
    
    for(int i=1;i<money.size();i++){
        for(int j=0;j<=n;j++){
            if(j >= money[i])
                dp[j] += dp[j-money[i]] % 1000000007;
        }
    }
    
    answer = dp[n];
    return answer;
}