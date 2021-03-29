#include <string>
#include <vector>

using namespace std;

long long dp[60001];

long long tile(int x){
    if(x == 1)  return 1;
    if(x == 2) return 2;
    if(dp[x] != 0)  return dp[x] % 1000000007;
    return dp[x] = tile(x-2) % 1000000007 + tile(x-1) % 1000000007;
}


int solution(int n) {
    int answer = 0;
    answer = tile(n) % 1000000007;
    return answer;
}