#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t, m, input;
    cin >> t;

    for(int i=0;i<t;i++){
        cin >> m;
        vector<int> v;
        vector<int> ans;

        for(int j=0;j<m;j++){
            cin >> input;
            v.push_back(input);
            if(j % 2 == 0){
                sort(v.begin(), v.end());
                ans.push_back(v[j / 2]);
            }
        }
        cout << ans.size() << '\n';
        for(int j=0;j<ans.size();j++){
            cout << ans[j] << ' ';
            if((j+1) % 10 == 0) cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}