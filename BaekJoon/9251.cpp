#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string str1 = '0' + a;
    string str2 = '0' + b;
    vector<vector<int> > dp(str2.length(), vector<int>(str1.length(), 0));

    for(int i=1;i<str2.length();i++){
        for(int j=1;j<str1.length();j++){
            if(str2[i] == str1[j])  dp[i][j] = dp[i-1][j-1] + 1;
            else    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    // for(int i=0;i<str2.length();i++){
    //     for(int j=0;j<str1.length();j++){
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    cout << dp[str2.length() - 1][str1.length() - 1] << '\n';
    return 0;
}