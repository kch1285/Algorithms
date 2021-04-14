#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string dp[101][101];

string numAdd(string a, string b){
    int sum = 0;
    string result = "";

    while(!a.empty() || !b.empty() || sum){
        if(!a.empty()){
            sum += a.back() - '0';
            a.pop_back();
        }

        if(!b.empty()){
            sum += b.back() - '0';
            b.pop_back();
        }
        result.push_back((sum % 10) + '0');
        sum /= 10;
    }
    reverse(result.begin(), result.end());
    return result;
}


string comb(int n, int m){
    if(n == m || m == 0)  return "1";
    if(dp[n][m] != "")  return dp[n][m];
    return dp[n][m] = numAdd(comb(n-1, m-1), comb(n-1, m));
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    cout << comb(n, m) << '\n';
    return 0;
}