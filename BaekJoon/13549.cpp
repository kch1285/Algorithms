#include <iostream>
#include <queue>

using namespace std;

bool visit[100001];

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
    q.push(make_pair(0, n));
    visit[n] = true;

    while(!q.empty()){
        int cost = q.top().first;
        int pos = q.top().second;
        q.pop();

        if(pos == k){
            cout << cost << '\n';
            return 0;
        }

        if(pos * 2 < 100001 && !visit[pos * 2]){
            q.push(make_pair(cost, pos * 2));
            visit[pos * 2] = true;
        }

        if(pos + 1 <= 100001 && !visit[pos + 1]){
            q.push(make_pair(cost + 1, pos + 1));
            visit[pos + 1] = true;
        }
        if(0 <= pos - 1 && !visit[pos - 1]){
            q.push(make_pair(cost + 1, pos - 1));
            visit[pos - 1] = true;
        }
    }
}