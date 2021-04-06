#include <iostream>
#include <vector>

using namespace std;

vector <pair<int, int> > pv[101];
int dp[100001];

int main(){
    int n, k, w, v;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> w >> v;
        pv[i].push_back(make_pair(w, v));
        dp[pv[i].first] = pv[i].second;
    }
}