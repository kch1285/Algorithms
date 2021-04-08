#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    long long answer = 0;
    cin >> n;
    vector<int> tip(n);
    for(int i=0;i<n;i++){
        cin >> tip[i];
    }
    sort(tip.begin(), tip.end(), greater<int>());

    for(int i=0;i<n;i++){
        if(tip[i] - i > 0)  answer += tip[i] - i;
        else    break;
    }
    cout << answer << '\n';
}