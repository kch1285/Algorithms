#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n, a, b, ans = 0;
    cin >> n;
    vector<pair<int, int> > v;
    vector<int> dp(n, 1);

    for(int i=0;i<n;i++){
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());

    for(int i=1;i<n;i++){
        for(int j=i;j>=0;j--){
            if(v[i].second > v[j].second && dp[j] >= dp[i]){
                dp[i] = dp[j] + 1;
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << dp.size() - ans << '\n';
    return 0;
}