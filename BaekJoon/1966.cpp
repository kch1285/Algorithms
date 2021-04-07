#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int t, n, m, importance, idx, max_importance, answer;
    
    cin >> t;

    for(int i=0;i<t;i++){
        answer = 1;
        vector<pair<int, int> > q;
        cin >> n >> m;
        for(int j=0;j<n;j++){
            cin >> importance;
            q.push_back(make_pair(importance, j));
        }
        while(1){
            idx = 0;
            max_importance = 0;
            for(int j=0;j<q.size();j++){
                if(max_importance < q[j].first){
                    max_importance = q[j].first;
                    idx = j;
                }
            }

            for(int j=0;j<idx;j++){
                q.push_back(q.front());
                q.erase(q.begin());
            }

            if(q.front().second == m){
                cout << answer << '\n';
                break;
            }
            q.erase(q.begin());
            answer++;
        }
    }
    return 0;
}